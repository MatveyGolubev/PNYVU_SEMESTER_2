#include <GL/glut.h>
#include <array>
#include <cmath>

struct Position{
    float x,y;
};

std::array <Position,100> graph;
Position pos = {0.5, 0}; // инициализация начальной позиции

void renderScene(void);
void plotaxes(void);
void plotgraph(void);
void initGraph(void);
void heart(void);
void lissajousfigure1(void);
void lissajousfigure2(void);
void lissajousfigure3(void);

int main(int argc, char* argv[])
{
    initGraph();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,800);
    glutCreateWindow("Pers");
    glutDisplayFunc(renderScene);
    glClearColor(0,0,0,0);
    glutMainLoop();
    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // очистка буфера цвета и глубины
    glPushMatrix();
    glTranslatef(pos.x, pos.y, 0.0f); // перемещение объекта на текущую позицию
    plotgraph();
    glPopMatrix();
    glutSwapBuffers(); // смена буферов
}

void plotaxes(void){
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(0,0);
    glVertex2f(3,0);
    glColor3f(1,0,0);
    glVertex2f(0,0);
    glVertex2f(0,3);
    glEnd();

}

void plotgraph(void){
    glPushMatrix();
    glScalef(.25,.25,1);
    glTranslatef(-3,0,0);

    plotaxes();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    for(int i=0; i<graph.size(); i++)
        glVertex2f(graph[i].x ,graph[i].y);
    glEnd();
    glPopMatrix();
}

void initGraph(void) {
    heart();
    //lissajousfigure1();
    //lissajousfigure2();
    //lissajousfigure3();
}

void heart(void){
    Position p;
    float x = 0;
    float xf = 2 * 3.1415;
    float h = (xf - x) / (graph.size() - 1);
    for (int i = 0; i < graph.size(); i++) {
        float t = x + i * h;
        p.x = 16 * pow(sin(t), 3);
        p.y = 13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t);
        p.x *= 0.05;
        p.y *= 0.05;
        p.x += 1.5;
        p.y += 1;
        graph[i] = p;
}
    }

void lissajousfigure1(void){
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graph.size();
    int i = 0;
    while (t < tf){
        p.x = sin(t + 3.1415 / 2);
        p.y = sin(2 * t);
        p.x += 1.5;
        p.y += 1;
        graph[i] = p;
        t += h;
        i++;
        }
    }

void lissajousfigure2(void){
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graph.size();
    int i = 0;
    while (t < tf){
        p.x = sin(3*t + 3.1415 / 2);
        p.y = sin(2 * t);
        p.x += 1.5;
        p.y += 1;
        graph[i] = p;
        t += h;
        i++;
        }
    }

void lissajousfigure3(void){
    Position p;
    float t = 0;
    float tf = 2 * 3.1415;
    float h = (tf - t) / graph.size();
    int i = 0;
    while (t < tf){
        p.x = sin(5*t + 3.1415 / 2);
        p.y = sin(6 * t);
        p.x += 1.5;
        p.y += 1;
        graph[i] = p;
        t += h;
        i++;
        }
    }

