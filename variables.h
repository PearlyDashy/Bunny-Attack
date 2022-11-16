
#include <GLFW/glfw3.h>
#include <engine/Billboard.h>
#include <engine/CollisionBox.h>
#include <engine/Objectives.h>
#include <engine/Particles.h>
#include <engine/Plane.h>
#include <engine/QuadTexture.h>
#include <engine/RigidModel.h>
#include <engine/Terrain.h>
#include <engine/shader_m.h>
#include <engine/skybox.h>
#include <engine/textrenderer.h>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>
#include <string>
#include <vector>


enum LightType
{
    FlatColor,
    AllLights,
    DirectionalLight,
    SpotLight,
    PointLight
};

enum Axis
{
    X,
    Y,
    Z
};
enum TypeActionKeyBoard
{
    GAME,
    OBJECTS,
    COLLISION,
    LIGHTING,
};

enum TransformObject
{
    MODEL,
    COLLBOX,
};

//:::: ENUMS :::://
LightType lightType = FlatColor;
TypeActionKeyBoard typemenu = GAME;
TransformObject transformObject = COLLBOX;

//:::: VARIABLES GLOBALES :::://

//:::: BANDERAS :::://
// 
//VENTANA
const unsigned int SCR_WIDTH = 1920;  // 800    - 1920
const unsigned int SCR_HEIGHT = 1080; // 600   -  1080

//BILLBOARDS
float watterAnimX, watterAnimY;
bool watterOut = false;

//CONTROL
double xJoy = 0.0;
double yJoy = 0.0;
double yLeftJoy = 0.0;
bool isJoyStick = false;
float lastX = SCR_WIDTH / 2.0f;
float lastY = SCR_HEIGHT / 2.0f;
bool firstMouse = true;

//TIMING
float deltaTime = 0.0f;
float lastFrame = 0.0f;
//TEXTURAS DEL TERRENO
const char **texturePaths;

//PARTICULAS
float respawnCount = 0.0f;

//:::: OBJETOS :::://
float camx = 0.18;
float camy = 11.66;
float camz = 11.66;
float camx2 = 40.0;
float camy2 = 40.0;
float camz2 = 40.0;



//-34.86, 28.93, 28.93 //-34.4106, 24.9489,24.9489
Camera camera(glm::vec3(-33.8431, 22.3878, 34.7604)); // Camera camera(glm::vec3(2.0f, 1.5f, 4.0f)); posicion de la camara al iniciar el programa  //0.42, 11.72, 11.72    
                                
Plane plane;



//:::: VECTORES :::://
glm::vec3 force(0);
glm::vec3 posModel(0);
glm::vec3 rotationModel(0);
glm::vec3 scaleCollBox(0);
glm::vec3 skyPos(0);
glm::vec3 lightPos(1.2f, 1.0f, 2.0f);
glm::vec3 lightDir(0.0f, 1.0f, 0.0f);
vec3 originPoint(0.0f, 1.0f, 0.0f);
vec3 rotationPoint(0.0, 1.0, 0.0);
vec3 mainLight(0.5);

//::::::::::::::ANIMACIONES:::::::::::::://

// VARIABLES PARA LA ANIMACION DEL PAJARO
bool flybird = true;
float flying = 0.0f;
int a = 2000;
int b = 0;
int c = 2000;
int d = 0;
bool mean = true;
int menos = 2000;
int menos2 = 2000;
int resultado;
int resultado2;
bool birdy = true;
bool birdy1 = false;
bool birdy2 = false;
bool birdy3 = false;
bool birdy4 = false;
bool birdy5 = false;


//  VARIABLES PARA LA ANIMACION DEL TRUENO
int thuna = 600;
int thunb = 0;
int thunres;
int thunmenos = 600;
bool thuntrue = true;
float thuny;

//  VARIABLES PARA LA ANIMACION DE BARON BUNNY (PERSONAJE JUGABLE) 
int indice = 33;
float animreset = 0.0f;
float animframes = 0.0f;
float animframes0 = 0.0f;
float animframes1 = 0.0f;
float animframes2 = 0.0f;
float animframes3 = 0.0f;
float animframes4 = 0.0f;




//::::::::::::::MOVER OBJETOS:::::::::::::://
float initScale = 0.2f;
int indexObject = 0;
int indexCollBox = 0;
int indexLight = 0;

bool isCollBoxModel = false;
bool renderCollBox = false;
bool renderLightingCubes = false;
float angleObjects = 0.0f;
float movement = 0.045f; //0.01 default

//::::::::::::::PROYECTILES:::::::::::::://
glm::vec3 Proyectil;
bool maybe = true;
int distb = 0;
int dista = 600;
bool during = true;
bool enemyshotpos = true;
float enemyprojpos;
float enemyprojpos1;
float enemyprojpos2;
float enemyprojpos3;
float enemyprojpos4;
float enemyprojpos5;
int proja = 300;
int projb = 0;
int projmenos = 300;
int projres;


//::::::::::::::COLISIONES:::::::::::::://
float distancia;
//BaronBunny

glm::vec3 BunCol;

//Thunder 
glm::vec3 ThunCol;
glm::vec3 EventoClimatico;

int bothp = 2;
int bothp1 = 2;
int bothp2 = 2;
int bothp3 = 2;
int bothp4 = 2;
bool botzin = true;


//::::::::::::::MOVIMIENTO DEL JUGADOR:::::::::::::://

glm::vec3 rotatebun;
glm::vec3 rotatefire;
bool firemovement = true;
//::::::::::::::PUNTOS DE VIDA:::::::::::::://
int jugador = 3;

//::::::::::::::ALEATORIEDAD:::::::::::::://
bool random = true;
glm::vec3 Heal;

//::::::::::::::CAMBIO DE CLIMA:::::::::::::://

bool day = true;
bool afternoon = false;
bool night = false;
int a1 = 0;
int b1 = 2000;
int c1 = 0;
int a2 = 0;
int b2 = 4000;
int c2 = 0;
int a3 = 0;
int b3 = 6000;
int c3 = 0;



//::::::::::::::GUI:::::::::::::://
QuadTexture Health1;
QuadTexture Health2;
QuadTexture Health3;
QuadTexture Dmg3;
QuadTexture Dmg2;
bool changeSprite = false;
bool showMainMessage = false;
bool showSecondMessage = false;
bool updateParticles = false;
float spriteX, spriteY;
int HPoints = 3;
int point = 0;
//::::::::::::::MENUS/UI:::::::::::::://
bool UIcontinue = true;
bool UILeave = true;
bool UImenu = true;
bool UIExit = false;
bool OP1 = true;
bool OP2 = false;
bool start = false;
bool begingame = true;
bool mainmenu;
float startx = -31.6198;
float starty = 8.64;
float startz = 32.0699;
float exitx = 200;
float exity = 200;
float exitz = 200;
float exitx2 = 400;
float exity2 = 400;
float exitz2 = 400;
glm::vec3 startmenu;
glm::vec3 exit1;
glm::vec3 cont;
glm::vec3 exit3;
bool defeat = false;


float winningx;
float winningy;
float winningz;

int finish;
bool ended = false;
bool UIWinMenu = true;
bool UIWinExit = false;


//::::::::::::::ARREGLOS DE OBJETOS:::::::::::::://
vector<glm::vec3> pointLightPositions;
vector<glm::vec3> physicsObjectsPositions;

vector<RigidModel> rigidModels;
vector<RigidModel> rbmodels = rigidModels;

vector<Model> models;

map<int, pair<string, CollisionBox>> collboxes;
map<int, pair<string, CollisionBox>> lightcubes;
CollisionBox* cb = new CollisionBox();
//::::::::::::::FISICAS:::::::::::::://
rbEnvironment physicsEnviroment;
rbRigidBody piso, pared;
int indexRigidModel = 0;
float colDetection = 0;



