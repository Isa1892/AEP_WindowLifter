################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Exceptions.c" \
"../Sources/External_Leds.c" \
"../Sources/Functions_main.c" \
"../Sources/IntcInterrupts.c" \
"../Sources/Internal_PButt.c" \
"../Sources/STM_Timer.c" \
"../Sources/Window_function.c" \
"../Sources/ivor_branch_table.c" \
"../Sources/main.c" \

C_SRCS += \
../Sources/Exceptions.c \
../Sources/External_Leds.c \
../Sources/Functions_main.c \
../Sources/IntcInterrupts.c \
../Sources/Internal_PButt.c \
../Sources/STM_Timer.c \
../Sources/Window_function.c \
../Sources/ivor_branch_table.c \
../Sources/main.c \

OBJS += \
./Sources/Exceptions_c.obj \
./Sources/External_Leds_c.obj \
./Sources/Functions_main_c.obj \
./Sources/IntcInterrupts_c.obj \
./Sources/Internal_PButt_c.obj \
./Sources/STM_Timer_c.obj \
./Sources/Window_function_c.obj \
./Sources/ivor_branch_table_c.obj \
./Sources/main_c.obj \

OBJS_QUOTED += \
"./Sources/Exceptions_c.obj" \
"./Sources/External_Leds_c.obj" \
"./Sources/Functions_main_c.obj" \
"./Sources/IntcInterrupts_c.obj" \
"./Sources/Internal_PButt_c.obj" \
"./Sources/STM_Timer_c.obj" \
"./Sources/Window_function_c.obj" \
"./Sources/ivor_branch_table_c.obj" \
"./Sources/main_c.obj" \

C_DEPS += \
./Sources/Exceptions_c.d \
./Sources/External_Leds_c.d \
./Sources/Functions_main_c.d \
./Sources/IntcInterrupts_c.d \
./Sources/Internal_PButt_c.d \
./Sources/STM_Timer_c.d \
./Sources/Window_function_c.d \
./Sources/ivor_branch_table_c.d \
./Sources/main_c.d \

OBJS_OS_FORMAT += \
./Sources/Exceptions_c.obj \
./Sources/External_Leds_c.obj \
./Sources/Functions_main_c.obj \
./Sources/IntcInterrupts_c.obj \
./Sources/Internal_PButt_c.obj \
./Sources/STM_Timer_c.obj \
./Sources/Window_function_c.obj \
./Sources/ivor_branch_table_c.obj \
./Sources/main_c.obj \

C_DEPS_QUOTED += \
"./Sources/Exceptions_c.d" \
"./Sources/External_Leds_c.d" \
"./Sources/Functions_main_c.d" \
"./Sources/IntcInterrupts_c.d" \
"./Sources/Internal_PButt_c.d" \
"./Sources/STM_Timer_c.d" \
"./Sources/Window_function_c.d" \
"./Sources/ivor_branch_table_c.d" \
"./Sources/main_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Exceptions_c.obj: ../Sources/Exceptions.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/Exceptions.args" -o "Sources/Exceptions_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/External_Leds_c.obj: ../Sources/External_Leds.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/External_Leds.args" -o "Sources/External_Leds_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/Functions_main_c.obj: ../Sources/Functions_main.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/Functions_main.args" -o "Sources/Functions_main_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/IntcInterrupts_c.obj: ../Sources/IntcInterrupts.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/IntcInterrupts.args" -o "Sources/IntcInterrupts_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/Internal_PButt_c.obj: ../Sources/Internal_PButt.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/Internal_PButt.args" -o "Sources/Internal_PButt_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/STM_Timer_c.obj: ../Sources/STM_Timer.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/STM_Timer.args" -o "Sources/STM_Timer_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/Window_function_c.obj: ../Sources/Window_function.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/Window_function.args" -o "Sources/Window_function_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/ivor_branch_table_c.obj: ../Sources/ivor_branch_table.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/ivor_branch_table.args" -o "Sources/ivor_branch_table_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/main.args" -o "Sources/main_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


