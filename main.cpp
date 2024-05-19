#include <smk/Color.hpp>
#include <smk/Shape.hpp>
#include <smk/Window.hpp>
//#include <smk/Font.hpp>
//#include <smk/Text.hpp>

int main() {
  auto window = smk::Window(1280, 720, "SMK Tutorial");
  auto circle = smk::Shape::Circle(50);
  //auto font = smk::Font("./font.ttf", 32);

  float x {0.f};

  circle.SetColor(smk::Color::Black);
  circle.SetPosition(x,240);
  bool dir {true};

  //auto text = smk::Text(font, "Terminal::Root");
  //text.SetPosition({200,400});

  window.ExecuteMainLoop([&]{

    if(dir){
      x += 15;
      if(x > 1280){
        dir = false;
      }
    }else{
      x -= 15;
      if(x < 0){
      dir = true;
      }
    }
    circle.SetPosition(x,240);

    window.PoolEvents();
    window.Clear(smk::Color::Yellow);
    window.Draw(circle);
    //window.Draw(text);
    window.Display();
    window.LimitFrameRate(60 /* fps */);
  });

  return 0;
}
