#!/bin/bash
chmod u+x $1
git add . $1
git commit -m "$2"
git push
