#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <bits/stdc++.h>
#include <time.h>
using namespace sf;
using namespace std;

int main()
{
    srand(time(0));

      RenderWindow window(VideoMode(1600, 900), "Game!");
      window.setFramerateLimit(80);

      re:
      int i,j,k,n,m,bas=1,spik=1,f=1,f1,con=1,px=4850,pon=0,snd=0,chr=1,en=1,lvl=1;
      int x=400,y=400,h=0,men=-1;
      double dx=0,dy=0;


      Texture t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17,t18,t19,t20;
      t1.loadFromFile("images/citysky2.png");
      t2.loadFromFile("images/basesoil.png");
      t3.loadFromFile("images/grasssoil.png");
      t4.loadFromFile("images/greybrick.png");
      t5.loadFromFile("images/redbrick.png");
      t6.loadFromFile("images/spike.png");
      t7.loadFromFile("images/kakashi1.png");
      t8.loadFromFile("images/kakashi2.png");
      t9.loadFromFile("images/coin.png");
      t10.loadFromFile("images/flag.png");
      t11.loadFromFile("images/fflag.png");
      t12.loadFromFile("images/naruto1.png");
      t13.loadFromFile("images/naruto2.png");
      t14.loadFromFile("images/doodle1.png");
      t15.loadFromFile("images/doodle2.png");
      t16.loadFromFile("images/zombie1.png");
      t17.loadFromFile("images/zombie2.png");
      t18.loadFromFile("images/starting.png");
      t19.loadFromFile("images/menu2.png");


      Sprite sky(t1),person(t7),base[1000],spike[1000],coin[1000],zomb[10];
      Sprite char1(t7),char2(t12),char3(t14),starting(t18),menu(t19);
      person.setPosition(x,y);

      sf::Font myFont;
      if (!myFont.loadFromFile("Font/AbrilFatface-Regular.otf")) {
      }
      sf::Music music;
      if (!music.openFromFile("music/yeah.ogg")) {
      }


      if(lvl==1){
      level1:

      sky.setPosition(0,-2400);
      //base
      //base
      for(i=1;i<=6;i++){
            for(j=1;j<=7;j++){
                  base[bas]=Sprite(t2);
                  base[bas].setPosition(i*50 -50,900- j*50);
                  bas++;
            }
      }
      for(i=1;i<=6;i++){
            base[bas]=Sprite(t3);
            base[bas].setPosition(i*50 -50,500);
            bas++;
      }

      for(i=1;i<=20;i++){
            for(j=1;j<=7;j++){
                  if((i==9 || i==10)&& (j>4)){
                        continue;
                  }
                  else{
                        base[bas]=Sprite(t2);
                        base[bas].setPosition(250 + i*50,900- j*50);
                        bas++;
                  }
            }
      }
      for(i=1;i<=20;i++){
            if(i<=6 || i>=13){
                  base[bas]=Sprite(t3);
                  base[bas].setPosition(250 + i*50,500);
                  bas++;
            }
      }

      base[bas]=Sprite(t10);
      base[bas].setPosition(100,250);
      bas++;

      for(i=1;i<=4;i++){
            base[bas]=Sprite(t4);
            base[bas].setPosition(1350 +i*50,400);
            bas++;
      }

      for(i=1;i<=4;i++){
            for(j=1;j<=9;j++){
                        base[bas]=Sprite(t2);
                        base[bas].setPosition(1650 + i*50,900- j*50);
                        bas++;
            }
      }
      for(i=1;i<=4;i++){
                  base[bas]=Sprite(t3);
                  base[bas].setPosition(1650 + i*50,450);
                  bas++;
      }

      for(i=1;i<=3;i++){
            if(i!=2){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(1950 + i*50,600);
                  bas++;
            }
      }


      for(i=1;i<=18;i++){
            for(j=1;j<=7;j++){
                        base[bas]=Sprite(t2);
                        base[bas].setPosition(2200 + i*50,900- j*50);
                        bas++;
            }
      }
      for(i=1;i<=18;i++){
            for(j=1;j<=2;j++){
                  if(j==2 &&(i>=1 && i<=10)){
                        continue;
                  }
                  else{
                        base[bas]=Sprite(t5);
                        base[bas].setPosition(2200 + i*50,550- j*50);
                        bas++;
                  }
            }
      }


      for(i=1;i<=6;i++){
            if(i==1 || i==3 || i==6){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(3200 + i*50,550);
                  bas++;
            }
      }
      for(i=1;i<=3;i++){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(3600 + i*50,450);
                  bas++;
      }

      base[bas]=Sprite(t4);
      base[bas].setPosition(3700 + i*50,350);
      bas++;

      for(i=1;i<=3;i++){
            base[bas]=Sprite(t4);
            base[bas].setPosition(4000 + i*50,300);
            bas++;
      }

      for(i=1;i<=6;i++){
            if(i<=2 || i>=5){
                  base[bas]=Sprite(t5);
                  base[bas].setPosition(4250 + i*50,250);
                  bas++;
            }
      }

      for(i=1;i<=2;i++){
            base[bas]=Sprite(t5);
            base[bas].setPosition(4700 + i*50,200);
            bas++;
      }

      for(i=1;i<=5;i++){
            for(j=1;j<=8;j++){
                        base[bas]=Sprite(t2);
                        base[bas].setPosition(4900 + i*50,900- j*50);
                        bas++;
            }
      }
      for(i=1;i<=5;i++){
            base[bas]=Sprite(t3);
            base[bas].setPosition(4900 + i*50,450);
            bas++;
      }

      base[bas]=Sprite(t11);
      base[bas].setPosition(5450,300);
      bas++;


      //spikes
      //spikes
      for(i=1;i<=2;i++){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(650 + i*50,650);
            spik++;
      }

      spike[spik]=Sprite(t6);
      spike[spik].setPosition(2050,600);
      spik++;

      for(i=1;i<=2;i++){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(4350 + i*50,250);
            spik++;
      }

      //coins
      //coins
      for(i=1;i<=6;i++){
            for(j=1;j<=3;j++){
                  if((j==1 && (i==1 || i==6)) || (j==2 && (i==2 || i==5)) || (j==3 && (i==3 || i==4))){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(550 + i*50,550- j*50);
                        con++;
                  }
            }
      }
      for(i=1;i<=2;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(650 + i*50,600);
            con++;
      }

      for(i=1;i<=5;i++){
            for(j=1;j<=4;j++){
                  if((j==1 && i==1)||(j==2 && i==1)||(j==3 && (i==2 || i==4)) ||(j==4 && i==3)){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(1200 + i*50,500- j*50);
                        con++;
                  }

            }
      }

      for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                  if((j==2 && i==5) || (j==3 && (i==1 || i==5)) || (j==4 && (i==2 || i==4)) || (j==5 && i==3)){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(1500 + i*50,500- j*50);
                        con++;
                  }

            }
      }
      for(i=1;i<=7;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(2350+i*50,450);
            con++;
      }
      for(i=1;i<=6;i++){
            for(j=1;j<=3;j++){
                  if((j==1 && (i==1 || i==6))||(j==2 && (i==2 || i==5 )) || (j==3 && (i==3 || i==4))){
                  coin[con]=Sprite(t9);
                  coin[con].setPosition(3200 + i*50,550-j*50);
                  con++;
                  }
            }
      }

      for(i=1;i<=2;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(4350 + i*50,100);
            con++;
      }
      for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                  if((j==1 && i==1) ||(j==2 && i==2) ||(j==3 && i==3) ||((j==4 || j==6) && i==4)){
                       coin[con]=Sprite(t9);
                       coin[con].setPosition(4750 + i*50,100+j*50);
                       con++;
                  }
            }
      }
      for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                  if((i==1 && (j==1||j==2)) || (i==2 && j==3) || (i==3 && j==3) || (i==4 && j==2) /*|| (i==5 && j==1)*/){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(5100 + i*50,450-j*50);
                        con++;
                  }
            }
      }
      for(i=1;i<=8;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(5300,350+i*50);
            con++;
      }
      goto st;
      }


      else if(lvl==2){
      level2:

      //sky
      //sky
      sky.setPosition(0,-2400);
      zomb[1]=Sprite(t16);
      zomb[1].setPosition(4030,530);


      //base
      //base
      for(i=1;i<=131;i++){
            for(j=1;j<=3;j++){
                  if(!(i==108 || i==109)){
                        base[bas]=Sprite(t4);
                        base[bas].setPosition(i*50 -50,900- j*50);
                        bas++;
                  }
            }
      }
      for(i=1;i<=131;i++){
            base[bas]=Sprite(t4);
            base[bas].setPosition(i*50 -50,100);
            bas++;
      }

      base[bas]=Sprite(t10);
      base[bas].setPosition(50,500);
      bas++;

      for(i=1;i<=24;i++){
            for(j=1;j<=8;j++){
                  if(((i==15 || i==21) && j<=6) || (i<=12 && i%3==0 && j<=i) || (i==18 && j>=8) || (i==24 && j<=4)){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(1150 +i*50 -700,750- j*50);
                  bas++;
                  }
            }
      }

      for(i=1;i<=2;i++){
            for(j=1;j<=8;j++){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(1500+500 +i*50,650- j*50);
                  bas++;
            }
      }
      for(i=1;i<=2;i++){
            for(j=1;j<=8;j++){
                  if(j<=2 || j>7){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(1600+500 +i*50,650- j*50);
                  bas++;
                  }
            }
      }

       for(i=1;i<=6;i++){
            for(j=1;j<=8;j++){
                  if(i>4 || j==1 || j>6){
                        base[bas]=Sprite(t4);
                        base[bas].setPosition(1600+800+ i*50,650- j*50);
                        bas++;
                  }
            }
      }
      for(i=1;i<=4;i++){
            for(j=1;j<=8;j++){
                  if(i==2 || j==1 || j>6){
                        base[bas]=Sprite(t4);
                        base[bas].setPosition(1600+1300+ i*50,650- j*50);
                        bas++;
                  }
            }
      }

      for(i=1;i<=2;i++){
            for(j=1;j<=6;j++){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(1600+1700+ i*50,650- j*50);
                  bas++;
            }
      }
      for(i=1;i<=6;i++){
            for(j=1;j<=8;j++){
                  if(j==1 || j>=7){
                        base[bas]=Sprite(t4);
                        base[bas].setPosition(1900+2100+ i*50,650- j*50);
                        bas++;
                  }
            }
      }
      for(i=1;i<=10;i++){
            for(j=1;j<=6;j++){
                  if(((j==1 || j==2) && (i<=2 || i>=9))||((j==3 || j==4) && (i==3 || i==4 || i==7 || i==8))/*||((j==5 || j==6) && (i==5 || i==6))*/){
                        base[bas]=Sprite(t4);
                        base[bas].setPosition(1900+2800+ i*50,750- j*50);
                        bas++;
                  }
            }
      }

      for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                  if(j%2==0 && i%2==0 && i==j){
                  base[bas]=Sprite(t4);
                  base[bas].setPosition(2700+2800+ i*50,750- j*50);
                  bas++;
                  }
            }
      }

      for(i=1;i<=10;i++){
            for(j=1;j<=3;j++){
                  if(!(((i==2|| i==3 || i==8 || i==9)&& j>=2)) &&  !((i==5 || i==6) && j<=2)){
                     base[bas]=Sprite(t4);
                     base[bas].setPosition(3200+2800+ i*50,500- j*50);
                     bas++;
                  }
            }

      }
      base[bas]=Sprite(t11);
      base[bas].setPosition(6750,350);
      bas++;


      //spikes
      for(i=1;i<=20;i++){
            if(i%3!=0){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(600+i*50,700);
            spik++;
            }
      }
      for(i=1;i<=1;i++){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(1800+i*50,700);
            spik++;
      }

      for(i=1;i<=4;i++){
            if(i==1 || i==4){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(3500+i*50,700);
            spik++;
            }
      }
      for(i=1;i<=2;i++){
            spike[spik]=Sprite(t6);
            spike[spik].setPosition(4900+i*50,550);
            spik++;
      }

      //coins
      for(i=1;i<=24;i++){
            for(j=1;j<=20;j++){
                  if((i==3 && j==8) || (i==6 && j==11) || ((i==9 || i==12) && j==13) || ((i==15 || i==21) && j==11 || ((i==18 || i==24) && j==9))){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(450+i*50,900-j*50);
                        con++;
                  }
            }
      }
      for(i=1;i<=2;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(2100 +i*50,500);
            con++;
      }
      for(i=1;i<=3;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(2450 +i*50,550);
            con++;
      }
      for(i=1;i<=4;i++){
            for(j=1;j<=2;j++){
                  if(i!=2){
                        coin[con]=Sprite(t9);
                        coin[con].setPosition(2900 +i*50,600 -j*50);
                        con++;
                  }
            }
      }
      for(i=1;i<=2;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(3300 +i*50,300);
            con++;
      }

      for(i=1;i<=2;i++){
            for(j=1;j<=3;j++){
                  coin[con]=Sprite(t9);
                  coin[con].setPosition(4100 +i*50,600 -j*50);
                  con++;
            }
      }
      for(i=1;i<=2;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(4900 +i*50,500);
            con++;
      }
      for(i=1;i<=4;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(4850 +i*50,700);
            con++;
      }
      for(i=1;i<=2;i++){
            for(j=1;j<=3;j++){
                  coin[con]=Sprite(t9);
                  coin[con].setPosition(5300 +i*50,900 -j*50);
                  con++;
            }
      }
      for(i=1;i<=2;i++){
      for(j=1;j<=2;j++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(6050+i*50,450 -j*50);
            con++;
      }
      }

      for(i=1;i<=2;i++){
      for(j=1;j<=2;j++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(6350 +i*50,450 -j*50);
            con++;
      }
      }
      for(i=1;i<=8;i++){
            coin[con]=Sprite(t9);
            coin[con].setPosition(6050+i*50,300);
            con++;
      }
      goto game;
      }

      st:
      while (window.isOpen()){
            Event e;
            while (window.pollEvent(e)){
                  if (e.type == Event::Closed){
                        window.close();
                  }
            }

            if(men==-1){
                  window.clear();
                  for(int pk=1;pk<=40;pk++){
                        window.draw(starting);
                        window.display();
                  }
                  goto menu;
            }
            //menu bar
            //menu bar
            else if(men==0){
                  menu:
                  men=0;
                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Start;
                  Start.setFont( myFont );
                  Start.setString("Start");
                  if((mx>=400 && mx<=520) && (my>=350 && my<400))Start.setFillColor(sf::Color::Yellow);
                  else Start.setFillColor(sf::Color::White);
                  Start.setStyle(sf::Text::Regular);
                  Start.setCharacterSize(40);
                  Start.setPosition(400, 350);

                  /*sf::Text Level;
                  Level.setFont( myFont );
                  Level.setString("Level");
                  if((mx>=700 && mx<=800) && (my>=350 && my<400))Level.setFillColor(sf::Color::Yellow);
                  else Level.setFillColor(sf::Color::White);
                  Level.setStyle(sf::Text::Regular);
                  Level.setCharacterSize(40);
                  Level.setPosition(700, 350);*/

                  sf::Text Sound;
                  Sound.setFont( myFont );
                  Sound.setString("Sound");
                  if((mx>=400 && mx<=550) && (my>=450 && my<500))Sound.setFillColor(sf::Color::Yellow);
                  else Sound.setFillColor(sf::Color::White);
                  Sound.setStyle(sf::Text::Regular);
                  Sound.setCharacterSize(40);
                  Sound.setPosition(400, 450);

                  sf::Text End;
                  End.setFont( myFont );
                  End.setString("Exit");
                  if((mx>=400 && mx<=500) && (my>=550 && my<600))End.setFillColor(sf::Color::Yellow);
                  else End.setFillColor(sf::Color::White);
                  End.setStyle(sf::Text::Regular);
                  End.setCharacterSize(40);
                  End.setPosition(400, 550);


                  if((mx>=400 && mx<=620) && (my>=350 && my<400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto character;
                  }
                  else if((mx>=400 && mx<=550) && (my>=450 && my<500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto sound;
                  }
                  else if((mx>=400 && mx<=500) && (my>=550 && my<600) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        return 0;
                  }

                  window.clear();
                  window.draw(menu);
                  window.draw(Start);
                  window.draw(Sound);
                  window.draw(End);
                  window.display();


            }

            //character menu
            //character menu
            else if(men==2){
                  character:
                  men=2;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text kak;
                  kak.setFont( myFont );
                  kak.setString("Kakashi");
                  if(chr==1)kak.setFillColor(sf::Color::Yellow);
                  else if((mx>=200 && mx<=350) && (my>=400 && my<450))kak.setFillColor(sf::Color::Yellow);
                  else kak.setFillColor(sf::Color::White);
                  kak.setStyle(sf::Text::Regular);
                  kak.setCharacterSize(40);
                  kak.setPosition(200, 400);

                  sf::Text nar;
                  nar.setFont( myFont );
                  nar.setString("Naruto");
                  if(chr==2)nar.setFillColor(sf::Color::Yellow);
                  else if((mx>=700 && mx<=830) && (my>=400 && my<450))nar.setFillColor(sf::Color::Yellow);
                  else nar.setFillColor(sf::Color::White);
                  nar.setStyle(sf::Text::Regular);
                  nar.setCharacterSize(40);
                  nar.setPosition(700, 400);

                  sf::Text dood;
                  dood.setFont( myFont );
                  dood.setString("Doodle");
                  if(chr==3)dood.setFillColor(sf::Color::Yellow);
                  else if((mx>=1200 && mx<=1330) && (my>=400 && my<450))dood.setFillColor(sf::Color::Yellow);
                  else dood.setFillColor(sf::Color::White);
                  dood.setStyle(sf::Text::Regular);
                  dood.setCharacterSize(40);
                  dood.setPosition(1200, 400);

                  sf::Text Start;
                  Start.setFont( myFont );
                  Start.setString("Start Game");
                  if((mx>=630 && mx<=900) && (my>=600 && my<650))Start.setFillColor(sf::Color::Yellow);
                  else Start.setFillColor(sf::Color::White);
                  Start.setStyle(sf::Text::Regular);
                  Start.setCharacterSize(50);
                  Start.setPosition(630, 600);

                  sf::Text sel;
                  sel.setFont( myFont );
                  sel.setString("Select Character");
                  sel.setFillColor(sf::Color::Cyan);
                  sel.setStyle(sf::Text::Regular);
                  sel.setCharacterSize(50);
                  sel.setPosition(590, 150);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=900) && (my>=800 && my<=850))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(30);
                  Gback.setPosition(700, 800);

                  char1.setPosition(250,300);
                  char2.setPosition(730,300);
                  char3.setPosition(1230,300);

                  if((mx>=200 && mx<=350) && (my>=400 && my<450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        chr=1;
                        person=Sprite(t7);
                  }
                  else if((mx>=700 && mx<=830) && (my>=400 && my<450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        chr=2;
                        person=Sprite(t12);
                  }
                  else if((mx>=1200 && mx<=1330) && (my>=400 && my<450) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        chr=3;
                        person=Sprite(t14);
                  }
                  else if((mx>=630 && mx<=900) && (my>=600 && my<650) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto game;
                  }

                  window.clear();
                  window.draw(sky);
                  window.draw(char1);
                  window.draw(char2);
                  window.draw(char3);
                  window.draw(kak);
                  window.draw(nar);
                  window.draw(dood);
                  window.draw(Start);
                  window.draw(sel);
                  window.display();
            }

            //sound menu
            //sound menu
            else if(men==3){
                  sound:
                  men=3;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Sounds;
                  Sounds.setFont( myFont );
                  Sounds.setString("SOUND SETTING");
                  Sounds.setFillColor(sf::Color::Cyan);
                  Sounds.setStyle(sf::Text::Regular);
                  Sounds.setCharacterSize(50);
                  Sounds.setPosition(700, 200);

                  sf::Text soundon;
                  soundon.setFont( myFont );
                  soundon.setString("Sound ON");
                  if(snd==1)soundon.setFillColor(sf::Color::Yellow);
                  else if((mx>=700 && mx<=900) && (my>=350 && my<400))soundon.setFillColor(sf::Color::Yellow);
                  else soundon.setFillColor(sf::Color::White);
                  soundon.setStyle(sf::Text::Regular);
                  soundon.setCharacterSize(40);
                  soundon.setPosition(700, 350);

                  sf::Text soundoff;
                  soundoff.setFont( myFont );
                  soundoff.setString("Sound OFF");
                  if(snd==0)soundoff.setFillColor(sf::Color::Yellow);
                  else if((mx>=700 && mx<=900) && (my>=450 && my<500))soundoff.setFillColor(sf::Color::Yellow);
                  else soundoff.setFillColor(sf::Color::White);
                  soundoff.setStyle(sf::Text::Regular);
                  soundoff.setCharacterSize(40);
                  soundoff.setPosition(700, 450);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=900) && (my>=800 && my<=850))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(30);
                  Gback.setPosition(700, 800);


                  if((mx>=700 && mx<=900) && (my>=350 && my<=400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        snd=1;
                  }
                  if((mx>=700 && mx<=900) && (my>=450 && my<=500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        snd=0;
                  }
                  if((mx>=700 && mx<=900) && (my>=800 && my<=850) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto menu;
                  }

                  window.clear();
                  window.draw(sky);
                  window.draw(Sounds);
                  window.draw(soundon);
                  window.draw(soundoff);
                  window.draw(Gback);
                  window.display();


            }

            //restart menu
            //restart menu
            else if(men==4){
                  restart:
                  men=4;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Dead;
                  Dead.setFont( myFont );
                  Dead.setString("YOU DIED");
                  Dead.setFillColor(sf::Color::Cyan);
                  Dead.setStyle(sf::Text::Regular);
                  Dead.setCharacterSize(50);
                  Dead.setPosition(700, 200);

                  sf::Text Restart;
                  Restart.setFont( myFont );
                  Restart.setString("Play Again");
                  if((mx>=700 && mx<=800) && (my>=350 && my<400))Restart.setFillColor(sf::Color::Yellow);
                  else Restart.setFillColor(sf::Color::White);
                  Restart.setStyle(sf::Text::Regular);
                  Restart.setCharacterSize(40);
                  Restart.setPosition(700, 350);

                  sf::Text End;
                  End.setFont( myFont );
                  End.setString("Exit");
                  if((mx>=700 && mx<=800) && (my>=450 && my<500))End.setFillColor(sf::Color::Yellow);
                  else End.setFillColor(sf::Color::White);
                  End.setStyle(sf::Text::Regular);
                  End.setCharacterSize(40);
                  End.setPosition(700, 450);

                  if((mx>=700 && mx<=900) && (my>=350 && my<400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto re;
                  }
                  else if((mx>=700 && mx<=900) && (my>=450 && my<500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        return 0;
                  }

                  window.clear();
                  window.draw(sky);
                  window.draw(Dead);
                  window.draw(Restart);
                  window.draw(End);
                  window.display();
            }

            //pause menu
            //pause menu
            else if(men==8){
                  pause:
                  men=8;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text Pause;
                  Pause.setFont( myFont );
                  Pause.setString("PAUSED");
                  Pause.setFillColor(sf::Color::Cyan);
                  Pause.setStyle(sf::Text::Regular);
                  Pause.setCharacterSize(50);
                  Pause.setPosition(700, 200);

                  sf::Text Resume;
                  Resume.setFont( myFont );
                  Resume.setString("Resume Game");
                  if((mx>=700 && mx<=800) && (my>=350 && my<400))Resume.setFillColor(sf::Color::Yellow);
                  else Resume.setFillColor(sf::Color::White);
                  Resume.setStyle(sf::Text::Regular);
                  Resume.setCharacterSize(40);
                  Resume.setPosition(700, 350);

                  sf::Text End;
                  End.setFont( myFont );
                  End.setString("End");
                  if((mx>=700 && mx<=800) && (my>=450 && my<500))End.setFillColor(sf::Color::Yellow);
                  else End.setFillColor(sf::Color::White);
                  End.setStyle(sf::Text::Regular);
                  End.setCharacterSize(40);
                  End.setPosition(700, 450);

                  if((mx>=700 && mx<=900) && (my>=350 && my<400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto game;
                  }
                  else if((mx>=700 && mx<=900) && (my>=450 && my<500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        return 0;
                  }

                  window.clear();
                  window.draw(sky);
                  window.draw(Pause);
                  window.draw(Resume);
                  window.draw(End);
                  window.display();
            }

            else if(men==5){
                  levels:
                  men=5;

                  double mx=sf::Mouse::getPosition(window).x;
                  double my=sf::Mouse::getPosition(window).y;

                  sf::Text lv1;
                  lv1.setFont( myFont );
                  lv1.setString("Level 1");
                  if((mx>=700 && mx<=900) && (my>=350 && my<400))lv1.setFillColor(sf::Color::Yellow);
                  else lv1.setFillColor(sf::Color::White);
                  lv1.setStyle(sf::Text::Regular);
                  lv1.setCharacterSize(40);
                  lv1.setPosition(700, 350);

                  sf::Text lv2;
                  lv2.setFont( myFont );
                  lv2.setString("Level 2");
                  if((mx>=700 && mx<=800) && (my>=450 && my<500))lv2.setFillColor(sf::Color::Yellow);
                  else lv2.setFillColor(sf::Color::White);
                  lv2.setStyle(sf::Text::Regular);
                  lv2.setCharacterSize(40);
                  lv2.setPosition(700, 450);

                  sf::Text lv3;
                  lv3.setFont( myFont );
                  lv3.setString("Level 3");
                  if((mx>=700 && mx<=800) && (my>=550 && my<600))lv3.setFillColor(sf::Color::Yellow);
                  else lv3.setFillColor(sf::Color::White);
                  lv3.setStyle(sf::Text::Regular);
                  lv3.setCharacterSize(40);
                  lv3.setPosition(700, 550);

                  sf::Text Gback;
                  Gback.setFont( myFont );
                  Gback.setString("Go back");
                  if((mx>=700 && mx<=900) && (my>=800 && my<=850))Gback.setFillColor(sf::Color::Yellow);
                  else Gback.setFillColor(sf::Color::White);
                  Gback.setStyle(sf::Text::Regular);
                  Gback.setCharacterSize(30);
                  Gback.setPosition(700, 800);



                  if((mx>=700 && mx<=900) && (my>=350 && my<400) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        lvl=1;
                  }
                  else if((mx>=700 && mx<=900) && (my>=450 && my<500) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        lvl=2;
                  }
                  else if((mx>=700 && mx<=900) && (my>=550 && my<600) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        lvl=3;
                  }
                  if((mx>=700 && mx<=900) && (my>=800 && my<=850) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))){
                        goto menu;
                  }

                  window.clear();
                  window.draw(sky);
                  window.draw(lv1);
                  window.draw(lv2);
                  window.draw(lv3);
                  window.draw(Gback);
                  window.display();

            }
            //game
            //game
            else{
                  game:
                  men=10;
                  //if(lvl!=1)goto lv;


            //move right
            f=1;
            if (Keyboard::isKeyPressed(Keyboard::Right)){
                  int mx=-1,my=-1;
                  for (int i=1;i<bas;i++){
                        if (FloatRect(x,y,65,60).intersects(base[i].getGlobalBounds()) ){
                              mx=base[i].getPosition().x;
                              my=base[i].getPosition().y;
                              f=-1;
                              break;
                        }
                  }
                  if(f==1){
                        sky.move(-5,0);
                        for (i=1;i<bas;i++){
                              base[i].move(-5,0);
                        }
                        for (i=1;i<spik;i++){
                              spike[i].move(-5,0);
                        }
                        for (i=1;i<con;i++){
                              coin[i].move(-5,0);
                        }
                        for (i=1;i<2;i++){
                              zomb[i].move(-5,0);
                        }

                        if(chr==1)person=Sprite(t7);
                        else if(chr==2)person=Sprite(t12);
                        else if(chr==3)person=Sprite(t14);
                        px-=5;
                  }
            }

            //move left

            f=1;
            if (Keyboard::isKeyPressed(Keyboard::Left)){
                  int mx=-1,my=-1;
                  for (int i=1;i<bas;i++){
                        if (FloatRect(x-2,y-5,40,60).intersects(base[i].getGlobalBounds()) ){
                              mx=base[i].getPosition().x;
                              f=-1;
                              break;
                        }
                  }
                  if(f==1 && px<4850){
                        sky.move(5,0);
                        for (i=1;i<bas;i++){
                              base[i].move(5,0);
                        }
                        for (i=1;i<spik;i++){
                              spike[i].move(5,0);
                        }
                        for (i=1;i<con;i++){
                              coin[i].move(5,0);
                        }
                        for (i=1;i<2;i++){
                              zomb[i].move(5,0);
                        }
                        if(chr==1)person=Sprite(t8);
                        else if(chr==2)person=Sprite(t13);
                        else if(chr==3)person=Sprite(t15);
                        px+=5;
                  }
            }

            if (Keyboard::isKeyPressed(Keyboard::Down)){
                  person.move(0,+10);
                  y+=5;
            }


            //gravity

            f1=1;
            int mx=-1,my=-1;
            for (i=1;i<bas;i++){
                  if ((FloatRect(x,y,50,80)).intersects(base[i].getGlobalBounds()) ){
                        //my=base[i].getPosition().y;
                        //if(y+80>=my && my!=1){
                              f1=-1;
                              y=y;
                              break;
                        //}
                  }
            }

            if(f1==1){
                  //cout<<"a";
                  dy++;
                  y+=dy;
            }
            else{
                  cout<<"b";

            }

            //move up

            if (Keyboard::isKeyPressed(Keyboard::Up)){
                  int f3=-1;
                  for (i=1;i<bas;i++){
                        if (FloatRect(x,y-70,55,80).intersects(base[i].getGlobalBounds())){
                              f3=2;
                              break;
                        }
                        else if (FloatRect(x,y-105,55,80).intersects(base[i].getGlobalBounds())){
                              f3=3;
                              break;
                        }
                        else if (FloatRect(x,y-140,55,80).intersects(base[i].getGlobalBounds())){
                              f3=4;
                              break;
                        }
                  }


                  if(f1==-1){
                        if(f3==2)dy=-4;
                        else if(f3==4)dy=-15;
                        else if(f3==3)dy=-11;
                        else dy=-18;
                        y+=dy;
                  }
            }


            //death spike
            for (i=1;i<spik;i++){
                  if (FloatRect(x+20,y,35,80).intersects(spike[i].getGlobalBounds()) ){
                        my=spike[i].getPosition().y;
                        if(y+80>=my && my!=1){
                              sf::Text dead;
                              dead.setFont( myFont );
                              dead.setString("        YOU DIED \n\n FROME THE SPIKE");
                              dead.setFillColor(sf::Color::Black);
                              dead.setStyle(sf::Text::Regular);
                              dead.setCharacterSize(50);
                              dead.setPosition(600, 400);

                              for(int pk=1;pk<=30;pk++){
                                    window.clear();
                                    window.draw(sky);
                                    window.draw(dead);
                                    window.display();
                              }
                              goto restart;
                              //f1=-1;
                              //break;
                        }
                  }
            }



            //enemy movement+death
            if(en<=90){
                  //zomb[1]=Sprite(t16);
                  zomb[1].move(+3,0);
                  en++;
            }
            else{
                  //zomb[1]=Sprite(t17);
                  zomb[1].move(-3,0);
                  if (en==180)en=0;
                  en++;
            }

            for (i=1;i<2;i++){
                  if (FloatRect(x,y,60,60).intersects(zomb[i].getGlobalBounds()) ){
                        my=spike[i].getPosition().y;
                        if(y+80>=my && my!=1){
                              sf::Text dead;
                              dead.setFont( myFont );
                              dead.setString("        YOU DIED \n\n FROME THE ENEMY");
                              dead.setFillColor(sf::Color::Black);
                              dead.setStyle(sf::Text::Regular);
                              dead.setCharacterSize(50);
                              dead.setPosition(600, 400);

                              for(int pk=1;pk<=30;pk++){
                                    window.clear();
                                    window.draw(sky);
                                    window.draw(dead);
                                    window.display();
                              }
                              goto restart;
                              //f1=-1;
                              //break;
                        }
                  }
            }



            //level pass/win

            if(px<=0 && y>=900){

                  sf::Text Passed;
                  Passed.setFont( myFont );
                  Passed.setString("LEVEL PASSED");
                  Passed.setFillColor(sf::Color::White);
                  Passed.setStyle(sf::Text::Regular);
                  Passed.setCharacterSize(50);
                  Passed.setPosition(600, 400);

                  sf::Text win;
                  win.setFont( myFont );
                  win.setString("GAME WIN");
                  win.setFillColor(sf::Color::White);
                  win.setStyle(sf::Text::Regular);
                  win.setCharacterSize(50);
                  win.setPosition(600, 400);

                  if(lvl==1){
                        for(int pk=1;pk<=20;pk++){
                        window.clear();
                        window.draw(sky);
                        window.draw(Passed);
                        window.display();
                        }
                        for (i=1;i<bas;i++){
                              base[i]=Sprite(t4);
                              base[i].setPosition(-5000,-5000);
                        }
                        for (i=1;i<spik;i++){
                              spike[i]=Sprite(t6);
                              spike[i].setPosition(-5000,-5000);
                        }
                        for (i=1;i<bas;i++){
                              coin[i]=Sprite(t9);
                              coin[i].setPosition(-5000,-5000);
                        }
                        for (i=1;i<2;i++){
                              zomb[i]=Sprite(t9);
                              zomb[i].setPosition(-5000,-5000);
                        }

                        bas=1,spik=1,f=1,f1,con=1,px=4850,pon=0,en=1,
                        x=400,y=400,h=0,dx=0,dy=0;
                        lvl=2;

                        goto level2;
                  }
                  else if(lvl==2){
                        for(int pk=1;pk<=20;pk++){
                        window.clear();
                        window.draw(sky);
                        window.draw(win);
                        window.display();
                        }
                        return 0;
                  }
            }


            //death falling

            if(y>=900){
                  sf::Text dead;
                  dead.setFont( myFont );
                  dead.setString("YOU DIED \n\n BY FALLING");
                  dead.setFillColor(sf::Color::White);
                  dead.setStyle(sf::Text::Regular);
                  dead.setCharacterSize(50);
                  dead.setPosition(600, 400);

                  for(int pk=1;pk<=30;pk++){
                        window.clear();
                        window.draw(sky);
                        window.draw(dead);
                        window.display();
                  }
                  goto restart;
            }



            //pause
            if (Keyboard::isKeyPressed(Keyboard::Escape)){
                  goto pause;
            }


            //points
            for (i=1;i<con;i++){
                  if (FloatRect(x,y+10,50,80).intersects(coin[i].getGlobalBounds()) ){
                        coin[i].setPosition(7500,7500);
                        pon++;
                        if(snd==1){
                              if (!music.openFromFile("music/yeah.ogg")) {
                              }
                              music.play();
                        }
                  }
            }
            string str="Coins " +to_string(pon);
            sf::Text poin;
            poin.setFont( myFont );
            poin.setString(str);
            poin.setFillColor(sf::Color::Black);
            poin.setStyle(sf::Text::Regular);
            poin.setCharacterSize(50);
            poin.setPosition(10, 10);



            //display

            person.setPosition(x,y);

            window.clear();
            window.draw(sky);
            for(i=1;i<bas;i++){
                  window.draw(base[i]);
            }
            for(i=1;i<spik;i++){
                  window.draw(spike[i]);
            }
            for(i=1;i<con;i++){
                  window.draw(coin[i]);
            }
            for(i=1;i<5;i++){
                  window.draw(zomb[i]);
            }
            window.draw(person);
            window.draw(poin);
            window.display();
            /*if (Keyboard::isKeyPressed(Keyboard::Right)){
                  for (i=1;i<bas;i++){
                        base[i].move(-25,0);
                  }
                  for (i=1;i<spik;i++){
                        spike[i].move(-25,0);
                  }
                  for (i=1;i<bas;i++){
                        coin[i].move(-25,0);
                  }
                   for (i=1;i<2;i++){
                        zomb[i].move(-25,0);
                  }
            }
            if (Keyboard::isKeyPressed(Keyboard::Left)){
                  for (i=1;i<bas;i++){
                        base[i].move(25,0);
                  }
                  for (i=1;i<spik;i++){
                        spike[i].move(25,0);
                  }
                  for (i=1;i<bas;i++){
                        coin[i].move(25,0);
                  }
                  for (i=1;i<2;i++){
                        zomb[i].move(25,0);
                  }
            }*/

            }

      }
      return 0;
}
