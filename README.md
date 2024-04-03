# Algo

## Build & Run

add task in `makefile`

for example:

```makefile
hello:
 $(CC) $(CFLAGS) -o ./dist/hello ./src/hello.cpp
```

After adding the task, execute the following command:

```sh
make [task] && ./dist/[task]
```
