# Componentes de myutils

| Componente | Archivo fuente | Descripción                                                | Parámetros                               |
-------------|----------------|------------------------------------------------------------|-------------------------------------------
| eval       | eval.c         | Devuelve el valor de una variable                          | `argv[1]`: variable                      |
| read       | read.c         | Lee un valor desde `stdin`                                 | `argv[1]`: prompt                        |
| cat        | cat.c          | Muestra el contenido de un archivo                         | `argv[1]`: archivo                       |
| echo       | echo.c         | Devuelve el eco de un string                               | `argv[1]`: string                        |
| fcat       | fcat.c         | Une el contenido de dos archivos                           | `argv[1]`: archivo1, `argv[2]`: archivo2 |
| pause      | pause.c        | Espera hasta que el usuario presione una tecla             |  No requiere ningún argumento            |
| robotsays  | robotsays.c    | Muestra a un robot repitiendo un string                    | `argv[1]`: string                        |
| touch      | touch.c        | Crea un archivo binario plano                              | `argv[1]`: archivo                       |
| yes        | yes.c          | Repite indefinidamente un string o, en su defecto, su ruta | `argv[1]`: string (opcional)             |
