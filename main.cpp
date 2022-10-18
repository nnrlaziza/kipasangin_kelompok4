#include <windows.h>
#include <GL/glut.h>

    //buat 3 buah method
    void cylinder(float rbase,float rtop,float height);
    void blok(float tebal,int ratiol,int ratiop);
    void bilah (float r_inner,float r_outer,float tebal,int batang);

    //atur layar
    int screen_width=500;//mengatur lebar screen
    int screen_height=600;//mengatur tinggi screen
    //int button_up=0,button_down=0;
    int Turn=0;//mengatur gerakan pada kipas agar stabil

    //atur variabel awal untuk pergerakan
    double rotation_y=0,rotation_y_plus=-15,direction;// mengatur rotasi agar searah jarum jam
    double Rhead=0,Rheadplus=0;
    double rotate_All=0,All_plus=0;
    double Angguk=0,Anggukplus=0;
    double press=0,pressplus,pressplus1=180,pressplus2=0,pressplus3=0,pressplus4=0,pressplus5=0;

    bool Toleh=true,Tolehpress=true;
    bool RightTurn=true;
    bool speed1=true,speed2=false,speed3=false,speed4=false,speed5=true;

    //seting pencahayaan
    //GLfloat ambient_light[]={0.3,0.3,0.45,1.0};
    GLfloat ambient_light[]={0.0,0.0,0.45,1.0};//GL_LIGHT0, GL_LIGHT1, GL_LIGHT2, GL_LIGHT3
    //GLfloat  source_light[]={0.9,0.8,0.8,1.0};
    GLfloat  source_light[]={0.8,0.8,0.8,1.0};
    //GLfloat     light_pos[]={7.0,0.0,1.0,1.0};
    GLfloat     light_pos[]={5.0,0.0,6.0,1.0};

    void init(void)
    {

    glShadeModel(GL_SMOOTH);
    glViewport(0,0,screen_width,screen_height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f,(GLfloat)screen_width/(GLfloat)screen_height,1.0f,1000.0f);

    glEnable (GL_DEPTH_TEST);
    glPolygonMode   (GL_FRONT_AND_BACK,GL_FILL);
    glEnable (GL_LIGHTING); // pemanggilan parameter lihghting
    glLightModelfv  (GL_LIGHT_MODEL_AMBIENT,ambient_light);
    glLightfv (GL_LIGHT0,GL_DIFFUSE,source_light);
    glLightfv (GL_LIGHT0,GL_POSITION,light_pos);
    glEnable (GL_LIGHT0);
    glEnable (GL_COLOR_MATERIAL);
    glColorMaterial (GL_FRONT,GL_AMBIENT_AND_DIFFUSE);
    }

