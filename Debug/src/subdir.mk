################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Audio.cpp \
../src/Game.cpp \
../src/GameState.cpp \
../src/GameStateDemo.cpp \
../src/Graphics.cpp \
../src/Image.cpp \
../src/Input.cpp \
../src/Music.cpp \
../src/OutlineFont.cpp \
../src/RunState.cpp \
../src/Sound.cpp \
../src/SplashState.cpp \
../src/StateManager.cpp \
../src/main.cpp 

OBJS += \
./src/Audio.o \
./src/Game.o \
./src/GameState.o \
./src/GameStateDemo.o \
./src/Graphics.o \
./src/Image.o \
./src/Input.o \
./src/Music.o \
./src/OutlineFont.o \
./src/RunState.o \
./src/Sound.o \
./src/SplashState.o \
./src/StateManager.o \
./src/main.o 

CPP_DEPS += \
./src/Audio.d \
./src/Game.d \
./src/GameState.d \
./src/GameStateDemo.d \
./src/Graphics.d \
./src/Image.d \
./src/Input.d \
./src/Music.d \
./src/OutlineFont.d \
./src/RunState.d \
./src/Sound.d \
./src/SplashState.d \
./src/StateManager.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


