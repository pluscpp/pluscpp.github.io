#include <iostream>
// g++ ./deploy.cpp -o deploy

int main(int argc, char **argv){
  std::system("mv ~/.netrc ~/.netrcBKP");
  std::system("eval `ssh-agent -s`");
  std::system("ssh-add ~/.ssh/pluscpp");
  std::system("git add .");
  std::system("git commit -m 'Files'");
  std::system("git push origin main");
  std::system("mv ~/.netrcBKP ~/.netrc");
  std::system("kill -9 $(pidof ssh-agent)");
  return 0;
}
