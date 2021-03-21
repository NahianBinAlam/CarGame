#include <windows.h>
#define GLUT_DISABLE_ATEXIT_HACK
#include <GL/glut.h>
#include<iostream>
using namespace std;

//Game Speed
int speed = 50;
//Game Track
int start=0;
//Track Score
int score = 0;
//For Card Left / RIGHT
int lrIndex = 0 ;
//Car Coming
int car1 = 0;
int lrIndex1=0;
int car2 = +35;
int lrIndex2=0;
int car3 = +70;
int lrIndex3=0;

void startGame(){
    //Road
    glColor3f(0.412, 0.412, 0.412);
    glBegin(GL_POLYGON);
    glVertex2f(20,0);
    glVertex2f(20,100);
    glVertex2f(80,100);
    glVertex2f(80,0);
    glEnd();

    //Road Left Border
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    glVertex2f(20,0);
    glVertex2f(20,100);
    glVertex2f(23,100);
    glVertex2f(23,0);
    glEnd();

    //Road Right Border
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    glVertex2f(77,0);
    glVertex2f(77,100);
    glVertex2f(80,100);
    glVertex2f(80,0);
    glEnd();

    //MAIN car
        //Front Tire
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex+24,5);
    glVertex2f(lrIndex+24,7);
    glVertex2f(lrIndex+32,7);
    glVertex2f(lrIndex+32,5);
    glEnd();
        //Back Tire
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex+24,1);
    glVertex2f(lrIndex+24,3);
    glVertex2f(lrIndex+32,3);
    glVertex2f(lrIndex+32,1);
    glEnd();
        //Car Body
    glColor3f(0.678, 1.000, 0.184);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex+26,1);
    glVertex2f(lrIndex+26,8);
   // glColor3f(0.000, 0.545, 0.545);

    glVertex2f(lrIndex+28,10);
    glVertex2f(lrIndex+30,8);
    glVertex2f(lrIndex+30,1);
    glEnd();

    //Opposite car 1
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex1+24,car1+100-4);
    glVertex2f(lrIndex1+24,car1+100-6);
    glVertex2f(lrIndex1+32,car1+100-6);
    glVertex2f(lrIndex1+32,car1+100-4);
    glEnd();
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex1+24,car1+100);
    glVertex2f(lrIndex1+24,car1+100-2);
    glVertex2f(lrIndex1+32,car1+100-2);
    glVertex2f(lrIndex1+32,car1+100);
    glEnd();
    glColor3f(1.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex1+26,car1+100);
    glVertex2f(lrIndex1+26,car1+100-7);
    glVertex2f(lrIndex1+28,car1+100-9);
    glVertex2f(lrIndex1+30,car1+100-7);
    glVertex2f(lrIndex1+30,car1+100);
    glEnd();
    car1--;
    if(car1<-100){
        car1=0;
        lrIndex1=lrIndex;
        score=score+5;
    }
    //KIll check car1
    if((abs(lrIndex-lrIndex1)<8) && (car1+100<10)){
            start = 0;
            cout<<"\n your score is:";
            cout<< score;

    }

    //Opposite car 2
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex2+24,car2+100-4);
    glVertex2f(lrIndex2+24,car2+100-6);
    glVertex2f(lrIndex2+32,car2+100-6);
    glVertex2f(lrIndex2+32,car2+100-4);
    glEnd();
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex2+24,car2+100);
    glVertex2f(lrIndex2+24,car2+100-2);
    glVertex2f(lrIndex2+32,car2+100-2);
    glVertex2f(lrIndex2+32,car2+100);
    glEnd();
    glColor3f(0.294, 0.000, 0.510);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex2+26,car2+100);
    glVertex2f(lrIndex2+26,car2+100-7);
    glVertex2f(lrIndex2+28,car2+100-9);
    glVertex2f(lrIndex2+30,car2+100-7);
    glVertex2f(lrIndex2+30,car2+100);
    glEnd();
    car2--;
    if(car2<-100){
        car2=0;
        lrIndex2=lrIndex;
        score=score+5;
    }
    //KIll check car2
    if((abs(lrIndex-lrIndex2)<8) && (car2+100<10)){
            start = 0;
            cout<<"\n your score is:";
            cout<< score;
    }

    //Opposite car 3
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex3+24,car3+100-4);
    glVertex2f(lrIndex3+24,car3+100-6);
    glVertex2f(lrIndex3+32,car3+100-6);
    glVertex2f(lrIndex3+32,car3+100-4);
    glEnd();
    glColor3f(0.000, 0.000, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex3+24,car3+100);
    glVertex2f(lrIndex3+24,car3+100-2);
    glVertex2f(lrIndex3+32,car3+100-2);
    glVertex2f(lrIndex3+32,car3+100);
    glEnd();
    glColor3f(1.000, 0.271, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f(lrIndex3+26,car3+100);
    glVertex2f(lrIndex3+26,car3+100-7);
    glVertex2f(lrIndex3+28,car3+100-9);
    glVertex2f(lrIndex3+30,car3+100-7);
    glVertex2f(lrIndex3+30,car3+100);
    glEnd();
    car3--;
    if(car3<-100){
        car3=0;
        lrIndex3=lrIndex;
        score=score+5;
    }
    //KIll check car3
    if((abs(lrIndex-lrIndex3)<8) && (car3+100<10)){
            start = 0;
            cout<<"\n your score is:";
            cout<< score;

    }

}

void fristDesign(){

        //Road Backgound
        glColor3f(0.000, 0.392, 0.000);
        glBegin(GL_POLYGON);
        glVertex2f(0,55);
        glVertex2f(100,55);
        glColor3f(0.604, 0.804, 0.196);
        glVertex2f(100,0);
        glVertex2f(0,0);
        glEnd();

        //Road Design In Front Page
        glColor3f(00, 0, 0);
        glBegin(GL_TRIANGLES);
        glVertex2f(51,55);
        glVertex2f(90,0);
        glVertex2f(10,0);
        glEnd();
        //Road Midle
        glColor3f(1, 1, 1);
        glBegin(GL_TRIANGLES);
        glVertex2f(51,55);
        glVertex2f(52,0);
        glVertex2f(48,0);
        glEnd();

         //Road Sky
        glColor3f(0.000, 0.749, 1.000);
        glBegin(GL_POLYGON);
        glVertex2f(100,100);
        glVertex2f(0,100);
        glColor3f(0.686, 0.933, 0.933);
        glVertex2f(0,55);
        glVertex2f(100,55);
        glEnd();

        //Hill 1
        glColor3f(0.235, 0.702, 0.443);
        glBegin(GL_TRIANGLES);
        glVertex2f(20,65);
        glVertex2f(27,55);
        glVertex2f(0,55);
        glEnd();

        //Hill 2
        glColor3f(0.000, 0.502, 0.000);
        glBegin(GL_TRIANGLES);
        glVertex2f(35,67);
        glVertex2f(50,55);
        glVertex2f(10,55);
        glEnd();

        //Hill 4
        glColor3f(0.235, 0.702, 0.443);
        glBegin(GL_TRIANGLES);
        glVertex2f(87,65);
        glVertex2f(100,55);
        glVertex2f(60,55);
        glEnd();

         //Hill 3
        glColor3f(0.000, 0.502, 0.000);
        glBegin(GL_TRIANGLES);
        glVertex2f(70,70);
        glVertex2f(90,55);
        glVertex2f(50,55);
        glEnd();

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    if(start==1){
        glClearColor(0.000, 0.392, 0.000,1);
        startGame();
    }

    else{
        fristDesign();

    }

    glFlush();
    glutSwapBuffers();
}



void spe_key(int key, int x, int y){
        switch (key) {
        case GLUT_KEY_DOWN:
            if(speed>52)
            speed=speed-2;
            break;
        case GLUT_KEY_UP:
            speed=speed+2;
            break;

        case GLUT_KEY_LEFT:
            if(lrIndex>=0){
                lrIndex = lrIndex - (speed/10);
                if(lrIndex<0){
                    lrIndex=-1;
                }
            }
            break;


        case GLUT_KEY_RIGHT:
            if(lrIndex<=44){
                lrIndex = lrIndex + (speed/10);
                if(lrIndex>44){
                    lrIndex = 45;
                }
            }
            break;

        default:
                break;
        }

}

void processKeys(unsigned char key, int x, int y) {

      switch (key)
            {
                case ' ':
            if(start==0){
                start = 1;
                speed = 50;
                lrIndex = 0 ;
                car1 = 0;
                lrIndex1=0;
                car2 = +35;
                lrIndex2=0;
                car3 = +70;
                lrIndex3=0;
                score=0;
            }
             break;

             case 'z':
                 exit(0);
             break;
             default:
                break;
        }
}

void timer(int){
    glutPostRedisplay();
    glutTimerFunc(1000/speed,timer,0);
}

int main(int argc, char *argv[])
{
    cout<<"Car Race \n press space to start \n press z to stop game \n press left to go left \n press right to go right \n press up to increse speed \n press down to decrese speed ";

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500,650);
    glutInitWindowPosition(500,20);
    glutCreateWindow("Car Game");
    glutDisplayFunc(display);
    glutSpecialFunc(spe_key);
    glutKeyboardFunc(processKeys );
    glOrtho(0,100,0,100,-1,1);
    glClearColor(0.184, 0.310, 0.310,1);
    glutTimerFunc(1000,timer,0);
    glutMainLoop();
    return 0;
}
