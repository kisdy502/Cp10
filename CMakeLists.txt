cmake_minimum_required(VERSION 3.8)
project(Cp10)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Stock0.cpp Stock0.h FMServer.cpp Stack.cpp Stack.h MyTime.cpp MyTime.h Verctor.cpp Verctor.h Stonewt.cpp Stonewt.h StringBad.cpp StringBad.h StringGood.cpp StringGood.h TabaletennisPlayer.cpp TabaletennisPlayer.h RatedPlayer.cpp RatedPlayer.h Brass.cpp Brass.h)
add_executable(Cp10 ${SOURCE_FILES})