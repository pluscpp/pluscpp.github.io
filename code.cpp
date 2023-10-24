#include <smk/Color.hpp>
#include <smk/Shape.hpp>
#include <smk/Window.hpp>

int main(){
  auto window = smk::Window(640, 480, "test");
  auto circle = smk::Shape::Circle(200);
  circle.SetColor(smk::Color::Red);
  circle.SetPosition(320,240);

    window.ExecuteMainLoop([&]{
      window.PoolEvents();
      window.Clear(smk::Color::Black);
      window.Draw(circle);
      window.Display();
      window.LimitFrameRate(60 /* fps */);
    });

  return 0;
}
// emcmake cmake -B web .
// cd web && make
// emrun index.html
// OK: ssh-keygen -t rsa -b 4096 -n /home/marcos/.ssh/pluscpp
// mv ~/.netrc ~/.netrcBKP
// eval `ssh-agent -s`
// ssh-add ${HOME}/.ssh/pluscpp
// git add .
// git commit -m "Files"
// git push origin main
// mv ~/.netrcBKP ~/.netrc
// kill -9 $(pidof ssh-agent)
