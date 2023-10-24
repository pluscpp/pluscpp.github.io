#!/usr/bin/env bash
mv ~/.netrc ~/.netrcBKP
eval `ssh-agent -s`
ssh-add ${HOME}/.ssh/pluscpp
git add .
git commit -m "Files"
git push origin main
mv ~/.netrcBKP ~/.netrc
kill -9 $(pidof ssh-agent)
