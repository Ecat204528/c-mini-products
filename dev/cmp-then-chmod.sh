#!/usr/bin/bash

gcc $1 -o $2 && echo compilation completed successfully\n
if(gcc $1)
  chmod +x $2 && echo chmod completed successfully\n
