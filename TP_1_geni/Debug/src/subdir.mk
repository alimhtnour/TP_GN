################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Array.cpp \
../src/exe1.cpp \
../src/exe2.cpp 

OBJS += \
./src/Array.o \
./src/exe1.o \
./src/exe2.o 

CPP_DEPS += \
./src/Array.d \
./src/exe1.d \
./src/exe2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Intel C++ Compiler'
	icpx -g -O0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


