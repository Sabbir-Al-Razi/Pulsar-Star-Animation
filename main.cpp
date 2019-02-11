
#include <GL/glu.h>
#include <math.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <Windows.h>
#include <MMSystem.h>
float theta;

//static int slices = 16;
//static int stacks = 16;

/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0.5,0);



///////////////////////Pulsar Star/////////////////
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidSphere(0.5,20,20);

/////////////////////// Magnetic Field ////////////////////////////////////////////////////////////////////////
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glColor3d(0,0,1);
        glLineWidth(2);
///////////////////////1st positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(0.6+0.8*cos(theta),0+0.8*sin(theta));
        }
        glEnd();
//////////////////////1st Negative Circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(-0.6+0.8*cos(theta),0+0.8*sin(theta));
        }
        glEnd();
///////////////////////2nd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(1.1+1.2*cos(theta),0+1.2*sin(theta));
        }
        glEnd();
//////////////////////2nd Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(-1.1+1.2*cos(theta),0+1.2*sin(theta));
        }
        glEnd();
///////////////////////3rd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(1.5+1.6*cos(theta),0+1.6*sin(theta));
        }
        glEnd();
///////////////////////3rd Negative circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(-1.5+1.6*cos(theta),0+1.6*sin(theta));
        }
        glEnd();
///////////////////////4th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(1.9+2.0*cos(theta),0+2.0*sin(theta));
        }
        glEnd();
///////////////////////4th Negative circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(-1.9+2.0*cos(theta),0+2.0*sin(theta));
        }
        glEnd();
///////////////////////5th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(2.3+2.4*cos(theta),0+2.4*sin(theta));
        }
        glEnd();
///////////////////////5th Negative circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex2f(-2.3+2.4*cos(theta),0+2.4*sin(theta));
        }
        glEnd();





/////////////////////// Magnetic Field 2 ////////////////////////////////////////////////////////////////////////

        glColor3d(0,0,1);
        glLineWidth(2);
///////////////////////1st positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+0.8*cos(theta),0.6+0.8*sin(theta));
        }
        glEnd();
//////////////////////1st Negative Circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+0.8*cos(theta),-0.6+0.8*sin(theta));
        }
        glEnd();
///////////////////////2nd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+1.2*cos(theta),1.1+1.2*sin(theta));
        }
        glEnd();
//////////////////////2nd Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+1.2*cos(theta),-1.1+1.2*sin(theta));
        }
        glEnd();
///////////////////////3rd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+1.6*cos(theta),1.5+1.6*sin(theta));
        }
        glEnd();
//////////////////////3rd Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+1.6*cos(theta),-1.5+1.6*sin(theta));
        }
        glEnd();
///////////////////////4th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+2.0*cos(theta),1.9+2.0*sin(theta));
        }
        glEnd();
//////////////////////4th Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+2.4*cos(theta),-2.3+2.4*sin(theta));
        }
        glEnd();
///////////////////////5th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+2.4*cos(theta),2.3+2.4*sin(theta));
        }
        glEnd();
//////////////////////5th Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0,0+2.0*cos(theta),-1.9+2.0*sin(theta));
        }
        glEnd();




///////////////////////Magnetic Field 3////////////////////////////////////////////////////////////////////////

        glColor3d(0,0,1);
        glLineWidth(2);
///////////////////////1st positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(0.6+0.8*sin(theta),0+0.8*cos(theta),0.6+0.8*sin(theta));
        }
        glEnd();
//////////////////////1st Negative Circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(-0.6+0.8*sin(theta),0+0.8*cos(theta),-0.6+0.8*sin(theta));
        }
        glEnd();
///////////////////////2nd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(1.1+1.2*sin(theta),0+1.2*cos(theta),1.1+1.2*sin(theta));
        }
        glEnd();
//////////////////////2nd Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(-1.1+1.2*sin(theta),0+1.2*cos(theta),-1.1+1.2*sin(theta));
        }
        glEnd();
///////////////////////3rd positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(1.5+1.6*sin(theta),0+1.6*cos(theta),1.5+1.6*sin(theta));
        }
        glEnd();
//////////////////////3rd Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(-1.5+1.6*sin(theta),0+1.6*cos(theta),-1.5+1.6*sin(theta));
        }
        glEnd();
///////////////////////4th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(1.9+2.0*sin(theta),0+2.0*cos(theta),1.9+2.0*sin(theta));
        }
        glEnd();
//////////////////////4th Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(-1.9+2.0*sin(theta),0+2.0*cos(theta),-1.9+2.0*sin(theta));
        }
        glEnd();
///////////////////////5th positive circle/////////////////
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(2.3+2.4*sin(theta),0+2.4*cos(theta),2.3+2.4*sin(theta));
        }
        glEnd();
//////////////////////5th Negative Circle/////////////////
       glBegin(GL_LINE_LOOP);
        for(int i=0; i<360; i++)
        {
            theta =i*3.1413/180;
            glVertex3f(-2.3+2.4*sin(theta),0+2.4*cos(theta),-2.3+2.4*sin(theta));
        }
        glEnd();
//////////////////////Ray 2/////////////////
        glColor3d(1,0.43,0.78);
        glTranslated(0,20,0);
        glRotated(270,-1,0,0);
        glRotated(a,0,0,1);
        glutSolidCone(1.5,20,50,50);


    //////////////////////Ray 1/////////////////
        glColor3d(1,0.43,0.78);
        glTranslated(0,0,40);
        glRotated(180,1,0,0);
        glRotated(a,0,0,1);
        glutSolidCone(1.5,20,50,50);


    glPopMatrix();
    glutSwapBuffers();
}

static void idle(void)
{
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

 /*Program entry point */

int main(int argc, char *argv[])
{

    glutInit(&argc, argv);glVertex2f(0.5,0);
    glutInitWindowSize(1280,640);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("PULSAR STAR");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutIdleFunc(idle);

    glClearColor(0,0,0,0);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    sndPlaySound("F:\\c drive\\Desktop\\COMPUTER GRAPHICS\\Pulsar Star\\34.wav",SND_ASYNC | SND_LOOP);

    glutMainLoop();

    return EXIT_SUCCESS;
}
