################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Exercici\ 1/src/functions.c \
../Exercici\ 1/src/main.c 

OBJS += \
./Exercici\ 1/src/functions.o \
./Exercici\ 1/src/main.o 

C_DEPS += \
./Exercici\ 1/src/functions.d \
./Exercici\ 1/src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Exercici\ 1/src/functions.o: ../Exercici\ 1/src/functions.c Exercici\ 1/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Exercici 1/src/functions.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Exercici\ 1/src/main.o: ../Exercici\ 1/src/main.c Exercici\ 1/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Exercici 1/src/main.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


