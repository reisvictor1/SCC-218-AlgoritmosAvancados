#Makefile, created to check, install and interprete Lua codes
#Matheus Tomieiro; Victor C. Reis - ICMC/USP - 2019

ifeq (,$ (command -v lua))
   	run:
		@printf "O interpretador lua nao esta instalado!\n"
		@printf "Rode <make lua> para instalar\n"
else
   	run:
	   @lua StringSearch.lua
endif

##Installing Lua
i_command := -
ifeq (Ubuntu,$(uname))
  i_command = sudo apt install lua5.2
else
  i_command = brew install lua
endif

lua:
	$(i_command)
##End installation

all: run

compile:
	@luac -o temp.bin StringSearch.lua
	@touch temp.lua
	@echo "dofile('temp.bin')" > temp.lua
	@rm temp.bin

runc:
	@lua temp.lua

clean:
	@rm temp.lua