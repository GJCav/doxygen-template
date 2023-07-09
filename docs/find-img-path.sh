#!/bin/sh

img_folders=$(find . \
    \(  \
        \( -path "./docs/build" -o -path "./doxygen-awesome-css" \)  -prune \
        -o \
        \( -name "*\.png" -o -name "*\.jpg" \) \
    \) -type f -printf "\"%p\"\n"\
    | xargs -n 1 dirname \
    | sort \
    | uniq \
    | awk '{printf "\"%s\" ", $0}' \
)

echo "IMAGE_PATH = $img_folders"