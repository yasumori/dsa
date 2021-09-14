mkdir -p output
g++ -o output/bubble -I/${PWD}/include sorting/bubble.cpp
g++ -o output/selection -I/${PWD}/include sorting/selection.cpp
g++ -o output/insertion -I/${PWD}/include sorting/insertion.cpp
