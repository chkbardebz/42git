
FLAGS = -Wall -Wextra -Werror
CC = cc -g
CLIENT = main_client.c
SERVER = main_server.c

all :
		@${CC} ${FLAGS} ${CLIENT} -o client
		@${CC} ${FLAGS} ${SERVER} -o server
		@echo "executables created"

server :
		@${CC} ${FLAGS} ${SERVER} -o server
		@echo "server created"

client :
		@${CC} ${FLAGS} ${CLIENT} -o client
		@echo "client created"

clean :
		@rm server
		@rm client
		@echo "cleaned"

fclean :
		@rm server
		@rm client
		@echo "fcleaned"