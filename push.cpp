#!/usr/bin/env bash
emcmake cmake -B web .
cd web && make
emrun index.html
OK: ssh-keygen -t rsa -b 4096 -n /home/marcos/.ssh/pluscpp
mv ~/.netrc ~/.netrcBKP
eval `ssh-agent -s`
ssh-add ${HOME}/.ssh/pluscpp
git add .
git commit -m "Files"
git push origin main
mv ~/.netrcBKP ~/.netrc
kill -9 $(pidof ssh-agent)
