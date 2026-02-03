C use libraries as #inclue

```c
#include <stdio.h>
```

## Get starting

wsl --install


## Certify ubuntu system is ready(windows)

1. Abrir PowerShell como ADMIN

🔹 2. Ver distribuições instaladas
```c
wsl --list --verbose
```
Provavelmente vai aparecer algo como:
```c
Ubuntu    Stopped    2
```
⚠️ Isso apaga o Linux antigo (mas como ele nem inicia, não tem problema).
```c
wsl --unregister Ubuntu
```
🔹 4. Instalar o Ubuntu novamente

Agora reinstala limpo:
```c
wsl --install -d Ubuntu
```

## cs50.h library

more friendly kind to practice and use https://manual.cs50.io/ 

mkdir        create file
rm           remove file
ls           list files
cp `name.c` `namecopy.c`  copy file
mv           move


