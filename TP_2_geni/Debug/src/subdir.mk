################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/TP_2_geni.cpp \
../src/matrice.cpp \
../src/puissance.cpp \
../src/vecteur.cpp 

OBJS += \
./src/TP_2_geni.o \
./src/matrice.o \
./src/puissance.o \
./src/vecteur.o 

CPP_DEPS += \
./src/TP_2_geni.d \
./src/matrice.d \
./src/puissance.d \
./src/vecteur.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Intel C++ Compiler'
	icpx -g -O0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


