
#include <GLFW/glfw3.h>
#include <engine/Billboard.h>
#include <engine/CollisionBox.h>
#include <engine/Objectives.h>
#include <engine/Particles.h>
#include <engine/Plane.h>
#include <engine/QuadTexture.h>
#include <engine/RigidModel.h>
#include <engine/Terrain.h>
#include <engine/functions.h>
#include <engine/shader_m.h>
#include <engine/skybox.h>
#include <engine/textrenderer.h>
#include <glad/glad.h>
#include <iostream>


class Victory {
private:
public:
    Victory() {}
    void setVictory() 
    {
        glm::vec3 enemyprojectile = models[30].getPosition();
        glm::vec3 enemyprojectile1 = models[79].getPosition();
        glm::vec3 enemyprojectile2 = models[80].getPosition();
        glm::vec3 enemyprojectile3 = models[81].getPosition();
        //1, 4, 5 , 3
        if (bothp == 0) 
        {
            glm::vec3 vic = models[45].getPosition();
            glm::vec3 vic1 = models[46].getPosition();
            glm::vec3 vic2 = models[47].getPosition();
            glm::vec3 vic3 = models[48].getPosition();
            glm::vec3 vic4 = models[49].getPosition();
            winningx = 500;
            winningy = 500;
            winningz = 500;
            vic.x = winningx;
            vic.y = winningy;
            vic.z = winningz;
            models[45].setPosition(vic);
            models[46].setPosition(vic);
            models[47].setPosition(vic);
            models[48].setPosition(vic);
            models[49].setPosition(vic);
            models[30].setPosition(vic);
        }
        if (bothp1 == 0)
        {
            glm::vec3 vic = models[50].getPosition();
            glm::vec3 vic1 = models[51].getPosition();
            glm::vec3 vic2 = models[52].getPosition();
            glm::vec3 vic3 = models[53].getPosition();
            glm::vec3 vic4 = models[54].getPosition();
            winningx = 520;
            winningy = 520;
            winningz = 520;
            vic.x = winningx;
            vic.y = winningy;
            vic.z = winningz;
            models[50].setPosition(vic);
            models[51].setPosition(vic);
            models[52].setPosition(vic);
            models[53].setPosition(vic);
            models[54].setPosition(vic);
        }
        if (bothp2 == 0)
        {
            glm::vec3 vic = models[55].getPosition();
            glm::vec3 vic1 = models[56].getPosition();
            glm::vec3 vic2 = models[57].getPosition();
            glm::vec3 vic3 = models[58].getPosition();
            glm::vec3 vic4 = models[59].getPosition();
            winningx = 540;
            winningy = 540;
            winningz = 540;
            vic.x = winningx;
            vic.y = winningy;
            vic.z = winningz;
            models[55].setPosition(vic);
            models[56].setPosition(vic);
            models[57].setPosition(vic);
            models[58].setPosition(vic);
            models[59].setPosition(vic);
            models[81].setPosition(vic);
        }
        if (bothp3 == 0)
        {
            glm::vec3 vic = models[60].getPosition();
            glm::vec3 vic1 = models[61].getPosition();
            glm::vec3 vic2 = models[62].getPosition();
            glm::vec3 vic3 = models[63].getPosition();
            glm::vec3 vic4 = models[64].getPosition();
            winningx = 560;
            winningy = 560;
            winningz = 560;
            vic.x = winningx;
            vic.y = winningy;
            vic.z = winningz;
            models[60].setPosition(vic);
            models[61].setPosition(vic);
            models[62].setPosition(vic);
            models[63].setPosition(vic);
            models[64].setPosition(vic);
            models[79].setPosition(vic);
        }
        if (bothp4 == 0)
        {
            glm::vec3 vic = models[65].getPosition();
            glm::vec3 vic1 = models[66].getPosition();
            glm::vec3 vic2 = models[67].getPosition();
            glm::vec3 vic3 = models[68].getPosition();
            glm::vec3 vic4 = models[69].getPosition();
            winningx = 580;
            winningy = 580;
            winningz = 580;
            vic.x = winningx;
            vic.y = winningy;
            vic.z = winningz;
            models[65].setPosition(vic);
            models[66].setPosition(vic);
            models[67].setPosition(vic);
            models[68].setPosition(vic);
            models[69].setPosition(vic);
            models[80].setPosition(vic);
        }
    }
    ~Victory(){}
};

class MainMenu
{
private:

public:
    MainMenu() {}

    void setMenu(GLFWwindow* window,bool _mainmenu)
    {
        if (start != true)
        {
            mainLight = vec3(0.35);
        }
        if (defeat == true) {
            mainLight = vec3(0.35);
        }
        if (glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS)
        {

            if (UImenu == true)
            {
                //cambiar la posición de camara y mover el modelo
                exit1 = models[32].getPosition();
                exit1.x = exitx;
                exit1.y = exity;
                exit1.z = exitz;
                models[32].setPosition(exit1);
                startmenu = models[31].getPosition();
                startmenu.x = exitx;
                startmenu.y = exity;
                startmenu.z = exitz;
                models[31].setPosition(startmenu);
                start = true;
                begingame = false;
            }

            if (UIExit == true)
            {
                std::cout << "\n Has eligido la opcion 'Exit', el juego ha terminado :) ";
                glfwSetWindowShouldClose(window, true);
                //return 0;
            }

            if (defeat == true) 
            {
                if (UIcontinue == true) {

                }
                if(UILeave==true)
                {
                    std::cout << "\n Has eligido la opcion 'Exit', el juego ha terminado :) ";
                    glfwSetWindowShouldClose(window, true);
                }

            }

            if (ended == true) 
            {

                if (UILeave == true)
                {
                    std::cout << "\n Has eligido la opcion 'Exit', el juego ha terminado :) ";
                    glfwSetWindowShouldClose(window, true);
                }
                if (UIWinMenu == true)
                {
                    exit1 = models[32].getPosition();
                    exit1.x = exitx;
                    exit1.y = exity;
                    exit1.z = exitz;
                    models[32].setPosition(exit1);
                    startmenu = models[31].getPosition();
                    startmenu.x = startx;
                    startmenu.y = starty;
                    startmenu.z = startz;
                    models[31].setPosition(startmenu);
                    start = false;
                    begingame = true;
                }

            }

        }

        if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
        {
            if (begingame == true)
            {
                exit1 = models[32].getPosition();
                exit1.x = exitx;
                exit1.y = exity;
                exit1.z = exitz;
                models[32].setPosition(exit1);
                startmenu = models[31].getPosition();
                startmenu.x = startx;
                startmenu.y = starty;
                startmenu.z = startz;
                models[31].setPosition(startmenu);
                UImenu = true;
                UIExit = false;

            }

            if (defeat == true) 
            {
                exit3 = models[81].getPosition();
                exit3.x = exitx2;
                exit3.y = exity2;
                exit3.z = exitz2;
                models[81].setPosition(exit3);
                cont = models[82].getPosition();
                cont.x = startx;
                cont.y = starty;
                cont.z = startz;
                models[82].setPosition(cont);
                UIcontinue = true;
                UILeave = false;
            }

            if (ended == true)
            {
                exit3 = models[83].getPosition();
                exit3.x = exitx2;
                exit3.y = exity2;
                exit3.z = exitz2;
                models[83].setPosition(exit3);
                cont = models[84].getPosition();
                cont.x = startx;
                cont.y = starty;
                cont.z = startz;
                models[84].setPosition(cont);
                UILeave = false;
                UIWinMenu = true;
            }

        }

        if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
        {
            if (begingame == true) {
                exit1 = models[32].getPosition();
                exit1.x = startx;
                exit1.y = starty;
                exit1.z = startz;
                models[32].setPosition(exit1);
                startmenu = models[31].getPosition();
                startmenu.x = exitx;
                startmenu.y = exity;
                startmenu.z = exitz;
                models[31].setPosition(startmenu);
                UImenu = false;
                UIExit = true;
            }

            if (defeat == true)
            {
                exit3 = models[82].getPosition();
                exit3.x = exitx2;
                exit3.y = exity2;
                exit3.z = exitz2;
                models[82].setPosition(exit3);
                cont = models[81].getPosition();
                cont.x = startx;
                cont.y = starty;
                cont.z = startz;
                models[81].setPosition(cont);
                UIcontinue = false;
                UILeave = true;
            }

            if (ended == true)
            {
                exit3 = models[84].getPosition();
                exit3.x = exitx2;
                exit3.y = exity2;
                exit3.z = exitz2;
                models[84].setPosition(exit3);
                cont = models[83].getPosition();
                cont.x = startx;
                cont.y = starty;
                cont.z = startz;
                models[83].setPosition(cont);              
                UILeave = true;
                UIWinMenu = false;
            }
        }
    }

    ~MainMenu() {}
};


class Health
{
private:
    int bunnyhealth;

public:
    int bunzhp = bunnyhealth;
    Health();
    void SetHealth(int);
    int GetHealth();
    ~Health();
};

//Cosntructor
Health::Health()
{
    // BunnyHP = BunsHealth;
}

//Destructor
Health::~Health()
{

}

void Health::SetHealth(int HP)
{
    bunnyhealth = HP;
}

int Health::GetHealth()
{
    return bunnyhealth;
}

class UI : public Health
{

private:

public:
    UI() {}//Constructor
    void setHealth(int bhp, glm::mat4 view, glm::mat4 projection) 
    {
        
        if (bhp == 3) //El metodo GetHealth se hereda para obtener la vida del personaje
        {
            Health1.Draw(glm::vec2(-0.8f, 0.8f), 0.2f);
            Health2.Draw(glm::vec2(-0.6f, 0.8f), 0.2);
            Health3.Draw(glm::vec2(-0.4f, 0.8f), 0.2);
        }
        if (bhp == 2)
        {
            Health1.Draw(glm::vec2(-0.8f, 0.8f), 0.2f);
            Health2.Draw(glm::vec2(-0.6f, 0.8f), 0.2);
            Dmg3.Draw(glm::vec2(-0.4f, 0.8f), 0.2);
        }
        if (bhp == 1)
        {
            Health1.Draw(glm::vec2(-0.8f, 0.8f), 0.2f);
            Dmg2.Draw(glm::vec2(-0.6f, 0.8f), 0.2);
            Dmg3.Draw(glm::vec2(-0.4f, 0.8f), 0.2);
        }
    }
    void setDamage();
    ~UI() {}//Destructor  
};

class DayNight 
{
private:

public:
    DayNight(){} //Constructor
    void Animacion(SkyBox* sky, glm::mat4, glm::mat4) //Polimorfismo debido a que existen otras funciones con el mismo nombre
    {
        if (day == true) 
        {
            mainLight = vec3(0.5);
            sky->reloadTexture("6");
            //system("cls");
            day = false;
        }

        a1++;
        if (a1 == b1)
        {
            a1 = c1;
            afternoon = true;
        }

        if (afternoon == true) 
        {
            mainLight = vec3(0.35);
            sky->reloadTexture("8");
            //system("cls");
            afternoon = false;

        }

        a2++;
        if (a2 == b2)
        {
            a2 = c2;
            night = true;

        }

        if (night == true)
        {
            mainLight = vec3(0.2);
            sky->reloadTexture("9");
            //system("cls");
            night = false;
        }

        a3++;
        if (a3 == b3)
        {
            a3 = c3;
            day = true;
        }


    }
    ~DayNight(){} //Destructor
};

class Damage : public Health
{
private:
    glm::vec3 BunzPos;
public:
    Damage();
    void SetColision(glm::vec3); //Encapsulamiento & Polimorfismo
    void SetPos(glm::vec3);//Encapsulamiento & Polimorfismo
    glm::vec3 GetPos();//Encapsulamiento & Polimorfismo 
    ~Damage();
};
//Cosntructor
Damage::Damage()
{

}

//Destructor
Damage::~Damage()
{

}

void Damage::SetPos(glm::vec3 _BunzPos) 
{
    BunzPos = _BunzPos;
}

glm::vec3 Damage::GetPos()
{
    return BunzPos;
}

void Damage::SetColision(glm::vec3 BunnyDamage) 
{
    glm::vec3 EnemyShot;
    glm::vec3 EnemyShot1;
    glm::vec3 EnemyShot2;
    glm::vec3 EnemyShot3;
    EnemyShot = models[30].getPosition();
    EnemyShot1 = models[79].getPosition();
    EnemyShot2 = models[80].getPosition();
    EnemyShot3 = models[81].getPosition();

    if (EnemyShot.z < BunnyDamage.z + 0.7 && EnemyShot.z > BunnyDamage.z - 0.7)  
    { 
        if (EnemyShot.x < BunnyDamage.x + 0.7 && EnemyShot.x > BunnyDamage.x - 0.7) 
        {
            EnemyShot.z = -30.22; // se regresa a la posición inicial del modelo 
            models[30].setPosition(EnemyShot);
            HPoints = HPoints - 1;
            std::cout << "\nSe Recibio danio";
        }
    }

    if (EnemyShot1.x < BunnyDamage.x + 0.7 && EnemyShot1.x > BunnyDamage.x - 0.7) 
    {
        if (EnemyShot1.z < BunnyDamage.z + 0.7 && EnemyShot1.z > BunnyDamage.z - 0.7)
        {
            EnemyShot1.x = -27.26; // se regresa a la posición inicial del modelo 
            models[79].setPosition(EnemyShot1);
            HPoints = HPoints - 1;
            std::cout << "\nSe Recibio danio";
        }
    }

    if (EnemyShot2.z < BunnyDamage.z + 0.7 && EnemyShot2.z > BunnyDamage.z - 0.7)
    {
        if (EnemyShot2.x < BunnyDamage.x + 0.7 && EnemyShot2.x > BunnyDamage.x - 0.7)
        {
            EnemyShot2.z = -24.94; // se regresa a la posición inicial del modelo 
            models[80].setPosition(EnemyShot2);
            HPoints = HPoints - 1;
            std::cout << "\nSe Recibio danio";
        }
    }

    if (EnemyShot3.x < BunnyDamage.x + 0.7 && EnemyShot3.x > BunnyDamage.x - 0.7)
    {
        if (EnemyShot3.z < BunnyDamage.z + 0.7 && EnemyShot3.z > BunnyDamage.z - 0.7)
        {
            EnemyShot3.x = 18.89; // se regresa a la posición inicial del modelo 
            models[81].setPosition(EnemyShot3);
            HPoints = HPoints - 1;
            std::cout << "\nSe Recibio danio";
        }
    }

}

class EnemyProjectile
{
private:

public:
    EnemyProjectile();
    void Animacion(glm::mat4 view, glm::mat4 projection) //Polimorfismo
    {
        glm::vec3 enemyprojectile = models[30].getPosition();
        glm::vec3 enemyprojectile1 = models[79].getPosition();
        glm::vec3 enemyprojectile2 = models[80].getPosition();
        glm::vec3 enemyprojectile3 = models[81].getPosition();


        if (enemyshotpos == true)
        {
            enemyprojpos = enemyprojectile.z;
            enemyprojpos1 = enemyprojectile1.x;
            enemyprojpos2 = enemyprojectile2.z;
            enemyprojpos3 = enemyprojectile3.x;
            enemyshotpos = false;
        }

        enemyprojectile.z += 0.10;
        enemyprojectile1.x += 0.10;
        enemyprojectile2.z += 0.10;
        enemyprojectile3.x -= 0.10;
        
        
        models[30].setPosition(enemyprojectile);
        models[79].setPosition(enemyprojectile1);
        models[80].setPosition(enemyprojectile2);
        models[81].setPosition(enemyprojectile3);
        projb++;

        if (projb == proja) {
            projres = projb - projmenos;
            projb = projres;
            enemyprojectile.z = enemyprojpos;
            enemyprojectile1.x = enemyprojpos1;
            enemyprojectile2.z = enemyprojpos2;
            enemyprojectile3.x = enemyprojpos3;
            models[30].setPosition(enemyprojectile);
            models[79].setPosition(enemyprojectile1);
            models[80].setPosition(enemyprojectile2);
            models[81].setPosition(enemyprojectile3);
        }
    }
    ~EnemyProjectile();
};
//Cosntructor
EnemyProjectile::EnemyProjectile()
{

}

//Destructor
EnemyProjectile::~EnemyProjectile()
{

}


class Estructura 
{
private:
    glm::vec3 BunPos;

public:
    Estructura();
    void SetColision(glm::vec3); //Encapsulamiento & Polimorfismo
    void SetPos(glm::vec3);//Encapsulamiento & Polimorfismo
    glm::vec3 GetPos();//Encapsulamiento & Polimorfismo 
    ~Estructura();
};

//Cosntructor
Estructura::Estructura() 
{

}

//Destructor
Estructura::~Estructura()
{

}

void Estructura :: SetPos(glm::vec3 BunnyPosition)
{
    BunPos = BunnyPosition;
}

glm::vec3 Estructura::GetPos() 
{
    return BunPos;
}

void Estructura::SetColision(glm::vec3 BunnyColision)
{
    //Pared Principal Derecha

    if (BunnyColision.x < -20.34 && BunnyColision.x > -31)
    {
        if (BunnyColision.z < 10 && BunnyColision.z > 9) 
        {
            std::cout << "\nSe esta chocando con la pared principal derecha por Dentro " << endl;
            BunnyColision.z += 0.5;
            models[0].setPosition(BunnyColision);
        }
        if (BunnyColision.z < 6.9 && BunnyColision.z > 6) 
        {
            std::cout << "\nSe esta chocando con la pared principal derecha por Fuera " << endl;
            BunnyColision.z -= 0.5;
            models[0].setPosition(BunnyColision);
        }

    }

    //Pared Principal Izquierda

    if (BunnyColision.x < -4.70 && BunnyColision.x > -16)
    {
        if (BunnyColision.z < 10 && BunnyColision.z > 9) {
            std::cout << "\nSe esta chocando con la pared principal izquierda por Dentro " << endl;
            BunnyColision.z += 0.5;
            models[0].setPosition(BunnyColision);
        }
        if (BunnyColision.z < 6.9 && BunnyColision.z > 6) {
            std::cout << "\nSe esta chocando con la pared principal izquierda por Fuera " << endl;
            BunnyColision.z -= 0.5;
            models[0].setPosition(BunnyColision);
        }
    }

    //Pared Izquierda

    if (BunnyColision.z < 36.2 && BunnyColision.z > 8.9)
    {
        if (BunnyColision.x <  -1.80 && BunnyColision.x > -2.17)
        {
            std::cout << "\nSe esta chocando con la pared izquierda por Dentro " << endl;
            BunnyColision.x -= 0.5;
            models[0].setPosition(BunnyColision);
        }

        if (BunnyColision.x < 0.15 && BunnyColision.x > -0.34)
        {
            std::cout << "\nSe esta chocando con la pared  izquierda por Fuera " << endl;
            BunnyColision.x += 0.5;
            models[0].setPosition(BunnyColision);
        }
    }

    //Pared Derecha 

    if (BunnyColision.z < 36.2 && BunnyColision.z > 8.9)
    {
        if (BunnyColision.x <  -34.36 && BunnyColision.x > -35.06)
        {
            std::cout << "\nSe esta chocando con la pared derecha por Dentro " << endl;
            BunnyColision.x += 0.5;
            models[0].setPosition(BunnyColision);
        }

        if (BunnyColision.x < -36.74 && BunnyColision.x > -37.28)
        {
            std::cout << "\nSe esta chocando con la pared  derecha por Fuera " << endl;
            BunnyColision.x -= 0.5;
            models[0].setPosition(BunnyColision);
        }
    }

    //Pared Trasera

    if (BunnyColision.x < -2.91 && BunnyColision.x > -33.84)
    {
        if (BunnyColision.z < 34.58 && BunnyColision.z > 34.10)
        {
            std::cout << "\nSe esta chocando con la pared trasera por Dentro " << endl;
            BunnyColision.z -= 0.5;
            models[0].setPosition(BunnyColision);
        }

        if (BunnyColision.z < 39 && BunnyColision.z > 38.58)
        {
            std::cout << "\nSe esta chocando con la pared trasera por Fuera " << endl;
            BunnyColision.z += 0.5;
            models[0].setPosition(BunnyColision);
        }
    }
}


class Bunny : public Health
{
public:
    Bunny();
    void movementleft() 
    {
        //posicionx--;
        posModel = models[0].getPosition();
        posModel.x -= movement;
        models[0].setPosition(posModel);
        models[33].setPosition(posModel);
        models[34].setPosition(posModel);
        models[35].setPosition(posModel);
        models[36].setPosition(posModel);
        models[37].setPosition(posModel);
        models[38].setPosition(posModel);
    }
    void movementright()
    {
        //posicionx++;
        posModel = models[0].getPosition();
        posModel.x += movement;
        models[0].setPosition(posModel);
        models[33].setPosition(posModel);
        models[34].setPosition(posModel);
        models[35].setPosition(posModel);
        models[36].setPosition(posModel);
        models[37].setPosition(posModel);
        models[38].setPosition(posModel);
    }
    void movementbackwards()
    {
        posModel = models[0].getPosition();
        posModel.z += movement;
        models[0].setPosition(posModel);
        models[33].setPosition(posModel);
        models[34].setPosition(posModel);
        models[35].setPosition(posModel);
        models[36].setPosition(posModel);
        models[37].setPosition(posModel);
        models[38].setPosition(posModel);
    } 
    void movementforwards()
    {
        posModel = models[0].getPosition();
        posModel.z -= movement;
        models[0].setPosition(posModel);
        models[33].setPosition(posModel);
        models[34].setPosition(posModel);
        models[35].setPosition(posModel);
        models[36].setPosition(posModel);
        models[37].setPosition(posModel);
        models[38].setPosition(posModel);
    }
    void Animacion()  //En este void se asignan los frames de la animacion organica para el modelo
    {
        
        animframes = animframes += 1;
        animframes0 = animframes0 += 1;
        animframes1 = animframes1 += 1;
        animframes2 = animframes2 += 1;
        animframes3= animframes3 += 1;
        animframes4 = animframes4 += 1;
    }
    void damage() 
    {
        glm::vec3 Fireball = models[3].getPosition();
        glm::vec3 Enemy;
        glm::vec3 Enemy1;
        glm::vec3 Enemy2;
        glm::vec3 Enemy3;
        glm::vec3 Enemy4;
        Enemy = models[45].getPosition();
        Enemy1 = models[50].getPosition();
        Enemy2 = models[55].getPosition();
        Enemy3 = models[60].getPosition();
        Enemy4 = models[65].getPosition();

        if (Fireball.z < Enemy.z + 0.7 && Fireball.z > Enemy.z - 0.7)
        {
            if (Fireball.x < Enemy.x + 0.7 && Fireball.x > Enemy.x - 0.7)
            {
                Fireball.x = -300.22; // se regresa a la posición inicial del modelo 
                models[3].setPosition(Fireball);
                bothp = bothp - 1;
                finish = finish + 1;
                std::cout << "\nSe danio el objetivo robot No 1";
            }
        }

        if (Fireball.z < Enemy1.z + 0.7 && Fireball.z > Enemy1.z - 0.7)
        {
            if (Fireball.x < Enemy1.x + 0.7 && Fireball.x > Enemy1.x - 0.7)
            {
                Fireball.x = -300.22; // se regresa a la posición inicial del modelo 
                models[3].setPosition(Fireball);
                bothp1 = bothp1 - 1;
                finish = finish + 1;
                std::cout << "\nSe danio el objetivo robot No 2";
            }
        }

        if (Fireball.z < Enemy2.z + 0.7 && Fireball.z > Enemy2.z - 0.7)
        {
            if (Fireball.x < Enemy2.x + 0.7 && Fireball.x > Enemy2.x - 0.7)
            {
                Fireball.x = -300.22; // se regresa a la posición inicial del modelo 
                models[3].setPosition(Fireball);
                bothp2 = bothp2 - 1;
                finish = finish + 1;
                std::cout << "\nSe danio el objetivo robot No 3";
            }
        }

        if (Fireball.z < Enemy3.z + 0.7 && Fireball.z > Enemy3.z - 0.7)
        {
            if (Fireball.x < Enemy3.x + 0.7 && Fireball.x > Enemy3.x - 0.7)
            {
                Fireball.x = -300.22; // se regresa a la posición inicial del modelo 
                models[3].setPosition(Fireball);
                bothp3 = bothp3 - 1;
                finish = finish + 1;
                std::cout << "\nSe danio el objetivo robot No 4";
            }
        }

        if (Fireball.z < Enemy4.z + 0.7 && Fireball.z > Enemy4.z - 0.7)
        {
            if (Fireball.x < Enemy4.x + 0.7 && Fireball.x > Enemy4.x - 0.7)
            {
                Fireball.x = -300.22; // se regresa a la posición inicial del modelo 
                models[3].setPosition(Fireball);
                bothp4 = bothp4 - 1;
                finish = finish + 1;
                std::cout << "\nSe danio el objetivo robot No 5";
            }
        }


    }
    ~Bunny();
    
};

//Cosntructor
Bunny::Bunny()
{
    //bunHP = getHealthPoints();
    
}

//Destructor
Bunny::~Bunny()
{

}

class Watter
{
public:
    Watter() {}//Constructor
    void Animacion(glm::mat4 view, glm::mat4 projection)//Polimorfismo 
    { 
        //Nota, el agua estaba en pocición 0.001f en lugar de  0.0001f 
        if (watterAnimY <= 4.0f && watterAnimX <= 4.0f && !watterOut)
        {
            watterAnimX += 0.0001f;
            watterAnimY += 0.0001f;
        }
        else
        {
            watterOut = true;
            if (watterAnimY > 0.0f && watterAnimX > 0.0f && watterOut)
            {
                watterAnimX -= 0.0001f;
                watterAnimY -= 0.0001f; 
            }
            else
                watterOut = false;
        }

        
            plane.draw(watterAnimX, watterAnimY, view, projection);
        
    }
    ~Watter() {}//Destructor
};

class Birdy 
{
public:
    Birdy(){}//Constructor
    void Animacion(glm::mat4 view, glm::mat4 projection)
    {

        //:::: ANIMACIONES 3D:::://
        glm::vec3 Bird = models[1].getPosition();
     
        if (flybird == true)
        {
            
            Bird.x += 0.02; //frente
            flying += 0.01;
        
            b++;

            if (b == a)
            {
                resultado = b - menos; // resultado = 2000 - 2000 
                b = resultado;
                flybird = false;
            }

        }
        else 
        {
            Bird.x -= 0.02; //atras
            d++;
            if (d == c) 
            {
                resultado2 = d - menos2;
                d = resultado2;
                flybird = true;
            }
        }

        models[1].setPosition(Bird);
        models[39].setPosition(Bird);
        models[40].setPosition(Bird);
        models[41].setPosition(Bird);
        models[42].setPosition(Bird);
        models[43].setPosition(Bird);
        models[44].setPosition(Bird);
    }

    ~Birdy() {}//Destructor
};    

class Fire 
{

public:
    Fire(){}//Cosntructor
    void Animacion(glm::mat4 view, glm::mat4 projection)
    {
        glm::vec3 fire = models[3].getAngles();
        fire = models[3].getAngles();
        fire.z -= 1.5; // x y z 
        models[3].setAngles(fire);
    }
    ~Fire() {}//Destructor
};

class Thunder  //Revisar La Animacion 
{
  
public:
    Thunder() {}

  
    void Animacion(glm::mat4 view, glm::mat4 projection) //Polimorfismo
    {
        glm::vec3 init = models[2].getPosition();
        glm::vec3 thunder = models[2].getPosition();
        thunder = models[2].getPosition();

        if (thuntrue == true)
        {
            thuny = thunder.y;
            thuntrue = false;
        }

        thunder.y -= 0.1;
        models[2].setPosition(thunder);
        thunb++;
        
        if (thunb == thuna) {
            thunres = thunb - thunmenos;
            thunb = thunres; 
            thunder.y = thuny;
            models[2].setPosition(thunder);
        }

        /*
        if (thunder.y==1.46999764f)
        {
            std::cout << " Casi toca el suelo, las colisiones funcionan " << endl;
        }
        */
    }
    void setDamage(glm::vec3 BunnyDamage)
    {
        glm::vec3 thunder;
        thunder = models[2].getPosition();
        if (thunder.z < BunnyDamage.z + 0.7 && thunder.z > BunnyDamage.z - 0.7)
        {
            if (thunder.x < BunnyDamage.x + 0.7 && thunder.x > BunnyDamage.x - 0.7)
            {

                thunder.z = 356; // se regresa a la posición inicial del modelo 
                models[2].setPosition(thunder);
                HPoints = point;
                std::cout << "\nSe Recibio danio";
            }
        }
    }
    ~Thunder() {} //Destructor
};

class Projectile
{
private:
    bool disparo;
    glm::vec3 Fireball = models[3].getPosition();
    glm::vec3 resetfire;

public:
    Projectile();
    void Animacion(glm::mat4, glm::mat4);
    void setAnimacion(bool); //Encapsulamiento 
    bool getAnimacion(); //Encapsulamiento 
    void SetPos(bool);//Encapsulamiento & Polimorfismo
    glm::vec3 GetPos();//Encapsulamiento & Polimorfismo

    
    ~Projectile();
};

//Cosntructor
Projectile::Projectile()
{
}

//Destructor
Projectile::~Projectile()
{

}

void Projectile::setAnimacion(bool shot) //Encapsulamiento
{
    disparo = shot;
}

bool Projectile::getAnimacion() //Encapsulamiento
{
    return disparo;
}

void Projectile::Animacion(glm::mat4 view, glm::mat4 projection) //Polimorfismo debido a que ya existen varias clases con el nombre de Animacion
{
    glm::vec3 move = models[3].getPosition();
    rotatebun = models[0].getAngles();
    rotatefire = models[3].getAngles();

   if (during == true) 
   {
       if (rotatebun.y == 180) 
       {
           rotatefire.y = 90;
           models[3].setAngles(rotatefire);
           move.z -= 0.30;
       }
       if (rotatebun.y == 0)
       {
           rotatefire.y = 90;
           models[3].setAngles(rotatefire);
           move.z += 0.30;
       }
       if (rotatebun.y == 90)
       {
           rotatefire.y = 0;
           models[3].setAngles(rotatefire);
           move.x += 0.30;
       }
       if (rotatebun.y == 270)
       {
           rotatefire.y = 0;
           models[3].setAngles(rotatefire);
           move.x -= 0.30;
       }

       distb++;

       models[3].setPosition(move);
   }

}

void Projectile::SetPos(bool _movement) 
{
    if (firemovement == true)
    {
        resetfire = models[3].getPosition();
        firemovement = false;
    }
}

glm::vec3 Projectile::GetPos() 
{
    return resetfire;
}

//Aqui Se inicializan los objetos de clase 
Bunny bun;
Thunder raiden;
Estructura Estruct;



int main()
{

    srand(time(NULL));
    //:::: INICIALIZAMOS GLFW CON LA VERSIÓN 3.3 :::://
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    //:::: CREAMOS LA VENTANA:::://
    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Bunny Attack", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    //:::: OBTENEMOS INFORMACIÓN DE TODOS LOS EVENTOS DE LA VENTANA:::://
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);
    glfwSetJoystickCallback(joystick_callback);

    //:::: DESHABILITAMOS EL CURSOR VISUALMENTE EN LA PANTALLA :::://
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    //:::: INICIALIZAMOS GLAD CON LAS CARACTERÍSTICAS DE OPENGL ESCENCIALES :::://
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    //INICIALIZAMOS LA ESCENA
    Shader ourShader("shaders/multiple_lighting.vs", "shaders/multiple_lighting.fs");
    Shader selectShader("shaders/selectedShader.vs", "shaders/lighting_maps.fs");
    initScene(ourShader);
    Terrain terrain("textures/heightmap.jpg", texturePaths);
    SkyBox sky(1.0f, "6");
    cb = isCollBoxModel ? &models[indexCollBox].collbox : &collboxes.at(indexCollBox).second;

    //:::: RENDER:::://
    while (!glfwWindowShouldClose(window))
    {
        //::::TIMING:::://Ayuda a crear animaciones fluidas
        float currentFrame = glfwGetTime();
        deltaTime = (currentFrame - lastFrame);
        lastFrame = currentFrame;
        respawnCount += 0.1;

        //::::ENTRADA CONTROL:::://
        processInput(window);
        //:::: LIMPIAMOS BUFFERS:::://
        glClearColor(0.933f, 0.811f, 0.647f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        //:::: PASAMOS INFORMACIÓN AL SHADER:::://
        ourShader.use();

        //:::: DEFINICIÓN DE MATRICES::::// La multiplicaciónd e model*view*projection crea nuestro entorno 3D
        glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom),
                                                (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 500.0f);
        glm::mat4 view = camera.GetViewMatrix();
        ourShader.setMat4("projection", projection);
        ourShader.setMat4("view", view);

        //:::: RENDER DE MODELOS:::://
        drawModels(&ourShader, view, projection);
        //:::: SKYBOX Y TERRENO:::://
        loadEnviroment(&terrain, &sky, view, projection);
        //:::: COLISIONES :::://
        collisions();
        glfwSwapBuffers(window);
        glfwPollEvents();

        MainMenu options;
        options.setMenu(window,mainmenu);

        Projectile FireBall;
        FireBall.SetPos(movement);

        bun.Animacion();
        bun.damage();
  
        Victory victory;
        Damage damage;
        BunCol = models[0].getPosition(); 
        Estruct.SetPos(BunCol);
        damage.SetPos(BunCol);
        raiden.setDamage(BunCol);
        ThunCol = models[2].getPosition();
        Proyectil = models[3].getPosition();

        Proyectil.x = BunCol.x;
        Proyectil.z = BunCol.z;
        Proyectil.y = BunCol.y;
        
        Estruct.SetColision(Estruct.GetPos()); //Aqui se le ponene las colisiones a la estructura       
        damage.SetColision(damage.GetPos());
        victory.setVictory();

        GLFWgamepadstate state;
        if (glfwJoystickIsGamepad(GLFW_JOYSTICK_1))
        {
            isJoyStick = true;
            if (glfwGetGamepadState(GLFW_JOYSTICK_1, &state))
            {

                if (state.axes[GLFW_GAMEPAD_AXIS_LEFT_X] == -1)
                {
                    models[3].setPosition(FireBall.GetPos());
                    rotatebun = models[0].getAngles();
                    rotatebun.y = 270;
                    models[0].setAngles(rotatebun);
                    models[33].setAngles(rotatebun);
                    models[34].setAngles(rotatebun);
                    models[35].setAngles(rotatebun);
                    models[36].setAngles(rotatebun);
                    models[37].setAngles(rotatebun);
                    models[38].setAngles(rotatebun);
                    bun.movementleft();

                }
                if (state.axes[GLFW_GAMEPAD_AXIS_LEFT_X] == 1)
                {
                    models[3].setPosition(FireBall.GetPos());
                    rotatebun = models[0].getAngles();
                    rotatebun.y = 90;
                    models[0].setAngles(rotatebun);
                    models[33].setAngles(rotatebun);
                    models[34].setAngles(rotatebun);
                    models[35].setAngles(rotatebun);
                    models[36].setAngles(rotatebun);
                    models[37].setAngles(rotatebun);
                    models[38].setAngles(rotatebun);
                    bun.movementright();
                }
                if (state.axes[GLFW_GAMEPAD_AXIS_LEFT_Y] == -1)
                {
                    models[3].setPosition(FireBall.GetPos());
                    rotatebun = models[0].getAngles();
                    rotatebun.y = 180;
                    models[0].setAngles(rotatebun);
                    models[33].setAngles(rotatebun);
                    models[34].setAngles(rotatebun);
                    models[35].setAngles(rotatebun);
                    models[36].setAngles(rotatebun);
                    models[37].setAngles(rotatebun);
                    models[38].setAngles(rotatebun);
                    bun.movementforwards();

                }
                if (state.axes[GLFW_GAMEPAD_AXIS_LEFT_Y] == 1)
                {
                    models[3].setPosition(FireBall.GetPos());
                    rotatebun = models[0].getAngles();
                    rotatebun.y = 0;
                    models[0].setAngles(rotatebun);
                    models[33].setAngles(rotatebun);
                    models[34].setAngles(rotatebun);
                    models[35].setAngles(rotatebun);
                    models[36].setAngles(rotatebun);
                    models[37].setAngles(rotatebun);
                    models[38].setAngles(rotatebun);
                    bun.movementbackwards();
                }
                if (state.buttons[GLFW_GAMEPAD_BUTTON_A] == GLFW_PRESS) //Proyectil (Bola de Fuego)
                {

                    Proyectil.y += 0.80;
                    Projectile shoting;
                    maybe = true;

                    models[3].setPosition(Proyectil);
                    //Reproducir la animación del proyectil 
                    shoting.setAnimacion(maybe);
                    shoting.getAnimacion();
                    //shoting.Animacion(shoting.getAnimacion());

                }
                if (state.buttons[GLFW_GAMEPAD_BUTTON_X] == GLFW_PRESS) //movimiento de angulo
                {
                    //Modelos con posicion aleatoria 2/2
                    float posicionx;
                    float posicionz;
                    posicionx = rand() % 30;
                    posicionz = rand() % 30;

                    EventoClimatico = models[2].getPosition();
                    EventoClimatico.x = posicionx;
                    EventoClimatico.z = posicionz;
                    models[2].setPosition(EventoClimatico);

                }
            }
        }


        if (finish == 10) 
        {
            ended = true;
        }
        if (random == true)
        {
            //Modelos con posicion aleatoria 1/2
            float posicionx;
            float posicionz;
            posicionx = rand() % 30;
            posicionz = rand() % 30;
            Heal = models[20].getPosition(); //Este objeto aparecera de manera random en un rango de 30 en el eje x y z 
            Heal.x = posicionx;
            Heal.z = posicionz;
            models[20].setPosition(Heal);
            random = false; //Random se iguala a falso para que no se vuelva a entrar a este if
        }

        if (HPoints == 0 )
        {
            defeat = true;
        }

        if (defeat == true)
        {
            glm::vec3 backwall = models[18].getPosition();
            backwall.z = 820;
            models[18].setPosition(backwall);
        }
        if (ended == true)
        {
            glm::vec3 backwall = models[18].getPosition();
            backwall.z = 820;
            models[18].setPosition(backwall);
        }

    }
    //:::: LIBERACIÓN DE MEMORIA:::://   
    delete[] texturePaths;
    sky.Release();
    terrain.Release();
    for (int i = 0; i < lightcubes.size(); i++)
        lightcubes[i].second.Release();
    for (int i = 0; i < collboxes.size(); i++)
        collboxes[i].second.Release();
    for (int i = 0; i < models.size(); i++)
        models[i].Release();
    for (int i = 0; i < rigidModels.size(); i++)
    {
        physicsEnviroment.Unregister(rigidModels[i].getRigidbox());
    }
    physicsEnviroment.Unregister(&piso);
    physicsEnviroment.Unregister(&pared);
    plane.Release();
    glfwTerminate();

    return 0;
}

void initScene(Shader ourShader)
{

    //AGUA
    //:::: DEFINIMOS LAS TEXTURAS DE LA MULTITEXTURA DEL TERRENO :::://
    texturePaths = new const char *[4];
    texturePaths[0] = "textures/multitexture_colors.jpg";
    texturePaths[1] = "textures/terrain9.jpg";
    texturePaths[2] = "textures/terrain10.jpg";
    texturePaths[3] = "textures/terrain9.jpg";

    //:::: POSICIONES DE TODAS LAS LUCES :::://
    pointLightPositions.push_back(glm::vec3(2.3f, 5.2f, 2.0f));
    pointLightPositions.push_back(glm::vec3(2.3f, 10.3f, -4.0f));
    pointLightPositions.push_back(glm::vec3(1.0f, 9.3f, -7.0f));
    pointLightPositions.push_back(glm::vec3(0.0f, 10.0f, -3.0f));

    //:::: POSICIONES DE TODOS LOS OBJETOS CON FISICAS :::://
    physicsObjectsPositions.push_back(glm::vec3(0.0, 10.0, 0.0));
    physicsObjectsPositions.push_back(glm::vec3(2.0, 10.0, 0.0));
    physicsObjectsPositions.push_back(glm::vec3(1.0, 10.0, 0.0));
    physicsObjectsPositions.push_back(glm::vec3(-2.0, 10.0, -2.0));
    physicsObjectsPositions.push_back(glm::vec3(-2.0, 10.0, -2.0));
    physicsObjectsPositions.push_back(glm::vec3(15.0, 1.0, -2.0));
    physicsObjectsPositions.push_back(glm::vec3(15.0, 1.0, -2.0));
    physicsObjectsPositions.push_back(glm::vec3(25.0, 10.0, -2.0));


    //:::: ESTADO GLOBAL DE OPENGL :::://
    glEnable(GL_DEPTH_TEST);

    //Definimos los collbox de la camara
    camera.setCollBox();

    //:::: CARGAMOS LOS SHADERS :::://
    ourShader.use();
       
    //:::: GUI:::://
    Health1 = QuadTexture("textures/health.png", 65.0f, 65.0f, 0, 0);
    Health2 = QuadTexture("textures/health.png", 65.0f, 65.0f, 0, 0);
    Health3 = QuadTexture("textures/health.png", 65.0f, 65.0f, 0, 0);
    Dmg3 = QuadTexture("textures/damage.png", 65.0f, 65.0f, 0, 0);
    Dmg2 = QuadTexture("textures/damage.png", 65.0f, 65.0f, 0, 0);

    //:::: INICIALIZAMOS NUESTROS MODELOS :::://    
    
    //Personaje
    models.push_back(Model("Bunny", "models/Bunny.obj", glm::vec3(-18.72, 0.0, 23.1950), glm::vec3(0, 180, 0), 0.0f, 0.0001));
    models.push_back(Model("Bird", "models/Ambiente/Bird.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .0001)); // -32.17, 16.17, -30.17
    models.push_back(Model("Thunder", "models/thunder.obj", glm::vec3(-400, 10.17, -300.2), glm::vec3(0, 0, 0), 0.0f, 1)); 
    models.push_back(Model("Fire", "models/fireball.obj", glm::vec3(9.44, 1.50, -200.3), glm::vec3(0, 90, 0), 0.0f, .080));
    //Costrucción
    models.push_back(Model("Suelo", "models/Estructura(Castillo)/Suelo.obj", glm::vec3(-17.24, -2.60, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.29)); //-17.24, -1.9, 24.17
    models.push_back(Model("Puerta", "models/Estructura(Castillo)/PuertaPrincipal.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedPrincipalDer", "models/Estructura(Castillo)/ParedPrincipalDer.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedPrincipalizq", "models/Estructura(Castillo)/ParedPrincipalIzq.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorrePequeñaDer", "models/Estructura(Castillo)/TorrePequeñaDer.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorrePequeñaIzq", "models/Estructura(Castillo)/TorrePequeñaIzq.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedMedioDer1", "models/Estructura(Castillo)/ParedMedioDer1.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedMedioDer2", "models/Estructura(Castillo)/ParedMedioDer2.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedMedioIzq1", "models/Estructura(Castillo)/ParedMedioIzq1.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedMedioIzq2", "models/Estructura(Castillo)/ParedMedioIzq2.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorreMedioDer", "models/Estructura(Castillo)/TorreMedioDer.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorreMedioIzq", "models/Estructura(Castillo)/TorreMedioIzq.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorreGradeDer", "models/Estructura(Castillo)/TorreGrandeDer.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("TorreGradeIzq", "models/Estructura(Castillo)/TorreGrandeIzq.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    models.push_back(Model("ParedTrasera", "models/Estructura(Castillo)/ParedTrasera.obj", glm::vec3(-17.24, -3.2, 24.17), glm::vec3(0, 90, 0), 0.0f, 1.5));
    //Modelos Ambietales  //hacer que las flores y el pasto aparezcan de forma aleatoria 
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(20, 0.0, -4.3), glm::vec3(0, 0, 0), 0.0f, initScale));
    models.push_back(Model("Bateria", "models/Ambiente/Battery.obj", glm::vec3(20, 0.0, -6), glm::vec3(0, 0, 0), 0.0f, 1.25));
    models.push_back(Model("Banca", "models/Ambiente/bench.obj", glm::vec3(20, 0.0, -10), glm::vec3(0, 270, 0), 0.0f, 0.75)); //0 loking to the right 
    models.push_back(Model("Flores", "models/Ambiente/Cool Flower Bed 2.obj", glm::vec3(20, 0.0, -14), glm::vec3(0, 270, 0), 0.0f, initScale));
    models.push_back(Model("Pescado", "models/Ambiente/Fish.obj", glm::vec3(1.01, -1.02, 2.77), glm::vec3(0, 0, 0), 0.0f, initScale));
    models.push_back(Model("Lamp", "models/Ambiente/fobj_lamp_globe.obj", glm::vec3(20, 0.0, -18), glm::vec3(0, 90, 0), 0.0f, 0.034)); //grass
    models.push_back(Model("Pasto", "models/Ambiente/grass.obj", glm::vec3(20, 0.0, -19), glm::vec3(0, 90, 0), 0.0f, initScale));
    models.push_back(Model("Robot", "models/Ambiente/Peridot_Decoy_Mesh_opt.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.0001));
    models.push_back(Model("Pintura", "models/Ambiente/pintura.obj", glm::vec3(20, 0.7, -23), glm::vec3(0, 270, 0), 0.0f, 0.0001));
    models.push_back(Model("Reloj", "models/Ambiente/reloj.obj", glm::vec3(20, 0.4, -24), glm::vec3(0, 270, 0), 0.0f, 0.0001));//28
    models.push_back(Model("BotelladeAgua", "models/Ambiente/wata.obj", glm::vec3(20, 0.4, -25), glm::vec3(0, 270, 0), 0.0f, 0.0001));//29
    models.push_back(Model("Proyectil", "models/Ambiente/waterdoug.obj", glm::vec3(-7.39, 1.2, -30.22), glm::vec3(0, 360, 0), 0.0f, 0.50)); //30
    models.push_back(Model("Menu", "models/menu.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //31
    models.push_back(Model("Menu", "models/exit.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //32
    models.push_back(Model("BunnyAnim", "models/BunnyAnim.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale)); //33
    models.push_back(Model("BunnyAnim1", "models/BunnyAnim1.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale));//34
    models.push_back(Model("BunnyAnim2", "models/BunnyAnim2.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale));//35
    models.push_back(Model("BunnyAnim0", "models/BunnyAnim.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale));//36
    models.push_back(Model("BunnyAnim3", "models/BunnyAnim3.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale));//37
    models.push_back(Model("BunnyAnim4", "models/BunnyAnim4.obj", glm::vec3(0.0, 0.2, -4.3), glm::vec3(0, 180, 0), 0.0f, initScale));//38
    models.push_back(Model("Bird1", "models/Ambiente/Bird.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024)); //39
    models.push_back(Model("Bird1", "models/Ambiente/Bird.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024)); //40
    models.push_back(Model("Bird2", "models/Ambiente/Bird2.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024));//41
    models.push_back(Model("Bird3", "models/Ambiente/Bird3.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024));//42
    models.push_back(Model("Bird4", "models/Ambiente/Bird4.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024));//43
    models.push_back(Model("Bird5", "models/Ambiente/Bird5.obj", glm::vec3(-32.17, 10.17, -30.17), glm::vec3(0, 90, 0), 0.0f, .024));//44
    //Enemigos
    models.push_back(Model("Bot", "models/Ambiente/PeriBot1.obj", glm::vec3(-7.15, 0.0,- 30.93), glm::vec3(0, 0, 0), 0.0f, 0.60));//45
    models.push_back(Model("Bot", "models/Ambiente/PeriBot2.obj", glm::vec3(-7.15, 0.0, -30.93), glm::vec3(0, 0, 0), 0.0f, 0.60));//46
    models.push_back(Model("Bot", "models/Ambiente/PeriBot1.obj", glm::vec3(-7.15, 0.0, -30.93), glm::vec3(0, 0, 0), 0.0f, 0.60));//47
    models.push_back(Model("Bot", "models/Ambiente/PeriBot3.obj", glm::vec3(-7.15, 0.0, -30.93), glm::vec3(0, 0, 0), 0.0f, 0.60));//48
    models.push_back(Model("Bot", "models/Ambiente/PeriBot4.obj", glm::vec3(-7.15, 0.0, -30.93), glm::vec3(0, 0, 0), 0.0f, 0.60));//49

    models.push_back(Model("Bot1", "models/Ambiente/PeriBot1.obj", glm::vec3(-18.47, 0.0, 16.4), glm::vec3(0, 0, 0), 0.0f, 0.60));//50
    models.push_back(Model("Bot1", "models/Ambiente/PeriBot2.obj", glm::vec3(-18.47, 0.0, 16.4), glm::vec3(0, 0, 0), 0.0f, 0.60));//51
    models.push_back(Model("Bot1", "models/Ambiente/PeriBot1.obj", glm::vec3(-18.47, 0.0, 16.4), glm::vec3(0, 0, 0), 0.0f, 0.60));//52
    models.push_back(Model("Bot1", "models/Ambiente/PeriBot3.obj", glm::vec3(-18.47, 0.0, 16.4), glm::vec3(0, 0, 0), 0.0f, 0.60));//53
    models.push_back(Model("Bot1", "models/Ambiente/PeriBot4.obj", glm::vec3(-18.47, 0.0, 16.4), glm::vec3(0, 0, 0), 0.0f, 0.60));//54 

    models.push_back(Model("Bot2", "models/Ambiente/PeriBot1.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.60));//55
    models.push_back(Model("Bot2", "models/Ambiente/PeriBot2.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.60));//56
    models.push_back(Model("Bot2", "models/Ambiente/PeriBot1.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.60));//57
    models.push_back(Model("Bot2", "models/Ambiente/PeriBot3.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.60));//58
    models.push_back(Model("Bot2", "models/Ambiente/PeriBot4.obj", glm::vec3(20, 0.0, -21), glm::vec3(0, 270, 0), 0.0f, 0.60));//59 

    models.push_back(Model("Bot3", "models/Ambiente/PeriBot1.obj", glm::vec3(-28.55, 0.0, -17.10), glm::vec3(0, 90, 0), 0.0f, 0.60));//60
    models.push_back(Model("Bot3", "models/Ambiente/PeriBot2.obj", glm::vec3(-28.55, 0.0, -17.10), glm::vec3(0, 90, 0), 0.0f, 0.60));//61
    models.push_back(Model("Bot3", "models/Ambiente/PeriBot1.obj", glm::vec3(-28.55, 0.0, -17.10), glm::vec3(0, 90, 0), 0.0f, 0.60));//62
    models.push_back(Model("Bot3", "models/Ambiente/PeriBot3.obj", glm::vec3(-28.55, 0.0, -17.10), glm::vec3(0, 90, 0), 0.0f, 0.60));//63
    models.push_back(Model("Bot3", "models/Ambiente/PeriBot4.obj", glm::vec3(-28.55, 0.0, -17.10), glm::vec3(0, 90, 0), 0.0f, 0.60));//64

    models.push_back(Model("Bot4", "models/Ambiente/PeriBot1.obj", glm::vec3(8.92, 0.0, -26.31), glm::vec3(0, 0, 0), 0.0f, 0.60));//65
    models.push_back(Model("Bot4", "models/Ambiente/PeriBot2.obj", glm::vec3(8.92, 0.0, -26.31), glm::vec3(0, 0, 0), 0.0f, 0.60));//66
    models.push_back(Model("Bot4", "models/Ambiente/PeriBot1.obj", glm::vec3(8.92, 0.0, -26.31), glm::vec3(0, 0, 0), 0.0f, 0.60));//67
    models.push_back(Model("Bot4", "models/Ambiente/PeriBot3.obj", glm::vec3(8.92, 0.0, -26.31), glm::vec3(0, 0, 0), 0.0f, 0.60));//68
    models.push_back(Model("Bot4", "models/Ambiente/PeriBot4.obj", glm::vec3(8.92, 0.0, -26.31), glm::vec3(0, 0, 0), 0.0f, 0.60));//69

    //AMBIENTE
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(14.94, 0.0, -32.08), glm::vec3(0, 180, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(-25.68, 0.0, -26.06), glm::vec3(0, 0, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(-37.06, 0.0, -14.37), glm::vec3(0, 90, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(-33.17, 0.0, -29.60), glm::vec3(0, 0, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(-18.86, 0.0, -35.06), glm::vec3(0, 180, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(29.46, 0.0, -20.39), glm::vec3(0, 270, 0), 0.0f, initScale));
    models.push_back(Model("Arbol", "models/Ambiente/Arbolito.obj", glm::vec3(28.17, 0.0, 1.89), glm::vec3(0, 90, 0), 0.0f, initScale)); //77

    models.push_back(Model("Pintura", "models/Ambiente/pintura.obj", glm::vec3(-24.5, 4.5, 9.80), glm::vec3(0, 0, 0), 0.0f, 0.45));
    models.push_back(Model("Reloj", "models/Ambiente/reloj.obj", glm::vec3(-11.40, 3.5, 9.80), glm::vec3(0, 0, 0), 0.0f, 0.45));

    models.push_back(Model("Proyectil", "models/Ambiente/waterdoug.obj", glm::vec3(-27.26, 1.2, -17.14), glm::vec3(0, 360, 0), 0.0f, 0.50)); //79
    models.push_back(Model("Proyectil", "models/Ambiente/waterdoug.obj", glm::vec3(8.95 , 1.2, -24.94), glm::vec3(0, 360, 0), 0.0f, 0.50)); //80
    models.push_back(Model("Proyectil", "models/Ambiente/waterdoug.obj", glm::vec3(18.89 , 1.2, -20.99), glm::vec3(0, 360, 0), 0.0f, 0.50)); //81

    //Pantalla Derrota
    models.push_back(Model("Derrota", "models/losecont.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //82
    models.push_back(Model("Derrota", "models/loseexit.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //83

    //Pantalla Victoria
    models.push_back(Model("Victoria", "models/winmenu.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //84
    models.push_back(Model("Victoria", "models/winexit.obj", glm::vec3(-31.6198, 8.64, 32.0699), glm::vec3(1050.00, 687.00, 2143.00), 0.0f, 1)); //85



    //CREAMOS TODAS  LAS CAJAS DE COLISION INDIVIDUALES
    CollisionBox collbox;
    glm::vec4 colorCollbox(0.41f, 0.2f, 0.737f, 0.06f);

    collbox = CollisionBox(glm::vec3(25.97, 2.4, 11), glm::vec3(0.3, 5, 12.4), colorCollbox);
    collboxes.insert(pair<int, pair<string, CollisionBox>>(0, pair<string, CollisionBox>("pared_atras", collbox)));
    collbox = CollisionBox(glm::vec3(9.88, 2.6, 7.45999), glm::vec3(0.3, 4.6, 7.6), colorCollbox);
    collboxes.insert(pair<int, pair<string, CollisionBox>>(1, pair<string, CollisionBox>("pared_frente_izq", collbox)));
    collbox = CollisionBox(glm::vec3(10.37, 2.8, 18.87), glm::vec3(0.3, 5.4, 1.2), colorCollbox);
    collboxes.insert(pair<int, pair<string, CollisionBox>>(2, pair<string, CollisionBox>("pared_frente_der", collbox)));
    collbox = CollisionBox(glm::vec3(10.35, 5.41, 14.85), glm::vec3(0.3, 1, 3.6), colorCollbox);
    collboxes.insert(pair<int, pair<string, CollisionBox>>(3, pair<string, CollisionBox>("pared_frente_arriba", collbox)));

    //CREAMOS LOS LIGHTCUBES QUE ENREALIDAD SON COLLISION BOXES QUE NOS AYUDARAN A IDENTIFICAR LA POSICIÓN DE DONDE ESTAN
    glm::vec3 lScale(0.5);
    colorCollbox = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
    collbox = CollisionBox(pointLightPositions[0], lScale, colorCollbox);
    lightcubes.insert(pair<int, pair<string, CollisionBox>>(0, pair<string, CollisionBox>("LUZ1", collbox)));
    collbox = CollisionBox(pointLightPositions[1], lScale, colorCollbox);
    lightcubes.insert(pair<int, pair<string, CollisionBox>>(1, pair<string, CollisionBox>("LUZ2", collbox)));
    collbox = CollisionBox(pointLightPositions[2], lScale, colorCollbox);
    lightcubes.insert(pair<int, pair<string, CollisionBox>>(2, pair<string, CollisionBox>("LUZ3", collbox)));
    collbox = CollisionBox(pointLightPositions[3], lScale, colorCollbox);
    lightcubes.insert(pair<int, pair<string, CollisionBox>>(3, pair<string, CollisionBox>("LUZ4", collbox)));

   
    //:::: AMBIENTE:::://

    plane = Plane("textures/watter.jpg", 100.0, 100.0, 0.0, 0.0);

    plane.setPosition(glm::vec3(-0.58, -1.85, -1.85)); //26.9563618, -0.57719110, -26.2608318 . -0.58, -1.85, -1.85
    plane.setAngles(glm::vec3(90.0, 0.0, 0.0));
    plane.setScale(glm::vec3(100.0));
}
//:::: CONFIGURACIONES :::://

void loadEnviroment(Terrain *terrain, SkyBox *sky, glm::mat4 view, glm::mat4 projection)
{
    glm::mat4 model = mat4(1.0f);
    model = glm::translate(model, glm::vec3(0.0, -2.5f, 0.0f));   // translate it down so it's at the center of the scene
    model = glm::scale(model, glm::vec3(100.5f, 100.0f, 100.5f)); // it's a bit too big for our scene, so scale it down

    terrain->draw(model, view, projection);
    terrain->getShader()->setFloat("shininess", 100.0f);
    setMultipleLight(terrain->getShader(), pointLightPositions);

    glm::mat4 skyModel = mat4(1.0f);
    skyModel = glm::translate(skyModel, glm::vec3(0.0f, 0.0f, 0.0f)); // translate it down so it's at the center of the scene
    skyModel = glm::scale(skyModel, glm::vec3(40.0f, 40.0f, 40.0f));  // it's a bit too big for our scene, so scale it down
    sky->draw(skyModel, view, projection, skyPos);
    sky->getShader()->setFloat("shininess", 10.0f);
    setMultipleLight(sky->getShader(), pointLightPositions);

    if (start == true) 
    {
        Watter lake;
        lake.Animacion(view, projection);

        Birdy bird;
        bird.Animacion(view, projection);

        Fire proyectil;
        proyectil.Animacion(view, projection);

        Thunder trueno;
        trueno.Animacion(view, projection);

        Projectile shoting;
        shoting.Animacion(view, projection);

        EnemyProjectile shot;
        shot.Animacion(view, projection);

        DayNight cycle;
        cycle.Animacion(sky, view, projection);

        UI ui;
        Bunny hp;
        hp.SetHealth(HPoints); //Se llama a la funcion set health desde el objeto clase bunny por medio de herencia  
        int bhp = hp.GetHealth();
        ui.setHealth(bhp, view, projection);
    }
    //RENDER DE LIGHT CUBES
    if (renderLightingCubes)
        for (pair<int, pair<string, CollisionBox>> lights : lightcubes)
            lights.second.second.draw(view, projection);

}



void drawModels(Shader *shader, glm::mat4 view, glm::mat4 projection)
{
    //DEFINIMOS EL BRILLO  DEL MATERIAL
    shader->setFloat("material.shininess", 60.0f);
    setMultipleLight(shader, pointLightPositions);   
    for (int i = 0; i < models.size(); i++)
    {
        detectColls(&models[i].collbox, models[i].name, &camera, renderCollBox, collidedObject_callback);


        if (start != true)
        {
            models[31].Draw(*shader); //menu 
            models[32].Draw(*shader); //menu 
        }
        else {
            if (i >= 33)
            {
                if (animframes <= 12)
                {
                    shader->use();
                    models[33].Draw(*shader); //Bunny 
                    models[39].Draw(*shader); //Pajaro
                    models[45].Draw(*shader); //Bot No.1
                    models[50].Draw(*shader); //Bot No.2
                    models[55].Draw(*shader); //Bot No.3
                    models[60].Draw(*shader); //Bot No.4
                    models[65].Draw(*shader); //Bot No.5
                    break;

                }
                if (animframes1 <= 24 && animframes1 > 12)
                {
                    shader->use();
                    models[40].Draw(*shader); //Pajaro
                    models[34].Draw(*shader); //Bunny
                    models[46].Draw(*shader); //Bot No.1
                    models[51].Draw(*shader); //Bot No.2
                    models[56].Draw(*shader); //Bot No.3
                    models[61].Draw(*shader); //Bot No.4
                    models[66].Draw(*shader); //Bot No.5
                    break;

                }
                if (animframes2 <= 36 && animframes2 > 24)
                {
                    shader->use();
                    models[35].Draw(*shader); //Bunny
                    models[41].Draw(*shader); //Pajaro
                    models[47].Draw(*shader); //Bot No.1
                    models[52].Draw(*shader); //Bot No.2
                    models[57].Draw(*shader); //Bot No.3
                    models[62].Draw(*shader); //Bot No.4
                    models[67].Draw(*shader); //Bot No.5
                    break;

                }
                if (animframes0 <= 48 && animframes0 > 36)
                {
                    shader->use();
                    models[36].Draw(*shader); //Bunny
                    models[42].Draw(*shader); //Pajaro
                    models[48].Draw(*shader); //Bot No.1
                    models[53].Draw(*shader); //Bot No.2
                    models[58].Draw(*shader); //Bot No.3
                    models[63].Draw(*shader); //Bot No.4
                    models[68].Draw(*shader); //Bot No.5
                    break;
                }
                if (animframes3 <= 60 && animframes3 > 48)
                {
                    shader->use();
                    models[37].Draw(*shader); //Bunny
                    models[43].Draw(*shader); //Pajaro
                    models[49].Draw(*shader); //Bot No.1
                    models[54].Draw(*shader); //Bot No.2
                    models[59].Draw(*shader); //Bot No.3
                    models[64].Draw(*shader); //Bot No.4
                    models[69].Draw(*shader); //Bot No.5
                    break;
                }
                if (animframes4 <= 72 && animframes4 > 60)
                {
                    shader->use();
                    models[38].Draw(*shader); //Bunny
                    models[41].Draw(*shader); //Pajaro
                    models[47].Draw(*shader); //Bot No.1
                    models[53].Draw(*shader); //Bot No.2
                    models[57].Draw(*shader); //Bot No.3
                    models[63].Draw(*shader); //Bot No.4
                    models[68].Draw(*shader); //Bot No.5
                    break;
                }

                animframes = animreset;
                animframes1 = animreset;
                animframes2 = animreset;
                animframes0 = animreset;
                animframes3 = animreset;
                animframes4 = animreset;

            }
            else
            {
                //SI SE RECOGIO EL OBJETO
                shader->use();
                models[i].Draw(*shader);
                //models[44].Draw(*shader);

                //ARBOLES
                models[70].Draw(*shader);
                models[71].Draw(*shader);
                models[72].Draw(*shader);
                models[73].Draw(*shader);
                models[74].Draw(*shader);
                models[75].Draw(*shader);
                models[76].Draw(*shader);

                //Reloj y Pintura
                models[77].Draw(*shader);
                models[78].Draw(*shader);

                //Proyectiles
                models[79].Draw(*shader);
                models[80].Draw(*shader);
                models[81].Draw(*shader);
                if (defeat == true) {
                    models[82].Draw(*shader);
                    models[83].Draw(*shader);
                }

                if (ended == true)
                {
                    models[84].Draw(*shader);
                    models[85].Draw(*shader);
                }

            }
        }
    }
}

void setSimpleLight(Shader *shader)
{
    shader->setVec3("light.ambient", 0.2f, 0.2f, 0.2f);
    shader->setVec3("light.diffuse", 0.5f, 0.5f, 0.5f);
    shader->setVec3("light.specular", 1.0f, 1.0f, 1.0f);
    shader->setInt("lightType", (int)lightType);
    shader->setVec3("light.position", lightPos);
    shader->setVec3("light.direction", lightDir);
    shader->setFloat("light.cutOff", glm::cos(glm::radians(12.5f)));
    shader->setFloat("light.outerCutOff", glm::cos(glm::radians(17.5f)));
    shader->setVec3("viewPos", camera.Position);
    shader->setFloat("light.constant", 0.2f);
    shader->setFloat("light.linear", 0.02f);
    shader->setFloat("light.quadratic", 0.032f);
    shader->setFloat("material.shininess", 60.0f);
}
void setMultipleLight(Shader *shader, vector<glm::vec3> pointLightPositions)
{
    shader->setVec3("viewPos", camera.Position);

    shader->setVec3("dirLights[0].direction", pointLightPositions[0]);
    shader->setVec3("dirLights[0].ambient", mainLight.x, mainLight.y, mainLight.z);
    shader->setVec3("dirLights[0].diffuse", mainLight.x, mainLight.y, mainLight.z);
    shader->setVec3("dirLights[0].specular", mainLight.x, mainLight.y, mainLight.z);

    shader->setVec3("dirLights[1].direction", pointLightPositions[1]);
    shader->setVec3("dirLights[1].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("dirLights[1].diffuse", 0.4f, 0.4f, 0.4f);
    shader->setVec3("dirLights[1].specular", 0.5f, 0.5f, 0.5f);

    shader->setVec3("dirLights[2].direction", pointLightPositions[2]);
    shader->setVec3("dirLights[2].ambient", 0.3f, 0.5f, 0.5f);
    shader->setVec3("dirLights[2].diffuse", 0.4f, 0.4f, 0.4f);
    shader->setVec3("dirLights[2].specular", 0.5f, 0.5f, 0.5f);

    shader->setVec3("dirLights[3].direction", pointLightPositions[3]);
    shader->setVec3("dirLights[3].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("dirLights[3].diffuse", 0.4f, 0.4f, 0.4f);
    shader->setVec3("dirLights[3].specular", 0.5f, 0.5f, 0.5f);

    shader->setVec3("pointLights[0].position", pointLightPositions[0]);
    shader->setVec3("pointLights[0].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("pointLights[0].diffuse", 0.8f, 0.8f, 0.8f);
    shader->setVec3("pointLights[0].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("pointLights[0].constant", 1.0f);
    shader->setFloat("pointLights[0].linear", 0.09);
    shader->setFloat("pointLights[0].quadratic", 0.032);

    shader->setVec3("pointLights[1].position", pointLightPositions[1]);
    shader->setVec3("pointLights[1].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("pointLights[1].diffuse", 0.8f, 0.8f, 0.8f);
    shader->setVec3("pointLights[1].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("pointLights[1].constant", 1.0f);
    shader->setFloat("pointLights[1].linear", 0.09);
    shader->setFloat("pointLights[1].quadratic", 0.032);

    shader->setVec3("pointLights[2].position", pointLightPositions[2]);
    shader->setVec3("pointLights[2].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("pointLights[2].diffuse", 0.8f, 0.8f, 0.8f);
    shader->setVec3("pointLights[2].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("pointLights[2].constant", 1.0f);
    shader->setFloat("pointLights[2].linear", 0.09);
    shader->setFloat("pointLights[2].quadratic", 0.032);

    shader->setVec3("pointLights[3].position", pointLightPositions[3]);
    shader->setVec3("pointLights[3].ambient", 0.05f, 0.05f, 0.05f);
    shader->setVec3("pointLights[3].diffuse", 0.8f, 0.8f, 0.8f);
    shader->setVec3("pointLights[3].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("pointLights[3].constant", 1.0f);
    shader->setFloat("pointLights[3].linear", 0.09);
    shader->setFloat("pointLights[3].quadratic", 0.032);

    shader->setVec3("spotLights[0].position", pointLightPositions[0]);
    shader->setVec3("spotLights[0].direction", glm::vec3(0.2, 0.8, 0.2));
    shader->setVec3("spotLights[0].ambient", 0.0f, 0.0f, 0.0f);
    shader->setVec3("spotLights[0].diffuse", 1.0f, 1.0f, 1.0f);
    shader->setVec3("spotLights[0].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("spotLights[0].constant", 1.0f);
    shader->setFloat("spotLights[0].linear", 0.09);
    shader->setFloat("spotLights[0].quadratic", 0.032);
    shader->setFloat("spotLights[0].cutOff", glm::cos(glm::radians(12.5f)));
    shader->setFloat("spotLights[0].outerCutOff", glm::cos(glm::radians(15.0f)));

    // spotLight
    shader->setVec3("spotLights[1].position", pointLightPositions[1]);
    shader->setVec3("spotLights[1].direction", camera.Front);
    shader->setVec3("spotLights[1].ambient", 0.0f, 0.0f, 0.0f);
    shader->setVec3("spotLights[1].diffuse", 1.0f, 1.0f, 1.0f);
    shader->setVec3("spotLights[1].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("spotLights[1].constant", 1.0f);
    shader->setFloat("spotLights[1].linear", 0.09);
    shader->setFloat("spotLights[1].quadratic", 0.032);
    shader->setFloat("spotLights[1].cutOff", glm::cos(glm::radians(12.5f)));
    shader->setFloat("spotLights[1].outerCutOff", glm::cos(glm::radians(15.0f)));

    shader->setVec3("spotLights[2].position", pointLightPositions[2]);
    shader->setVec3("spotLights[2].direction", camera.Front);
    shader->setVec3("spotLights[2].ambient", 0.0f, 0.0f, 0.0f);
    shader->setVec3("spotLights[2].diffuse", 1.0f, 1.0f, 1.0f);
    shader->setVec3("spotLights[2].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("spotLights[2].constant", 1.0f);
    shader->setFloat("spotLights[2].linear", 0.09);
    shader->setFloat("spotLights[2].quadratic", 0.032);
    shader->setFloat("spotLights[2].cutOff", glm::cos(glm::radians(12.5f)));
    shader->setFloat("spotLights[2].outerCutOff", glm::cos(glm::radians(15.0f)));

    shader->setVec3("spotLights[3].position", pointLightPositions[3]);
    shader->setVec3("spotLights[3].direction", camera.Front);
    shader->setVec3("spotLights[3].ambient", 0.0f, 0.0f, 0.0f);
    shader->setVec3("spotLights[3].diffuse", 1.0f, 1.0f, 1.0f);
    shader->setVec3("spotLights[3].specular", 1.0f, 1.0f, 1.0f);
    shader->setFloat("spotLights[3].constant", 1.0f);
    shader->setFloat("spotLights[3].linear", 0.09);
    shader->setFloat("spotLights[3].quadratic", 0.032);
    shader->setFloat("spotLights[3].cutOff", glm::cos(glm::radians(12.5f)));
    shader->setFloat("spotLights[3].outerCutOff", glm::cos(glm::radians(15.0f)));

    shader->setInt("lightType", (int)lightType);
    shader->setInt("maxRenderLights", 1);
}

void collisions()
{
    //TODO LO DE LAS COLISIONES VA AQUÍ
    detectColls(collboxes, &camera, renderCollBox, collidedObject_callback);
}