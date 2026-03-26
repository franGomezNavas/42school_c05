# 🏊 C Piscine — C 05

> *Módulo sobre recursividad e iteración de la C Piscine de 42. ¡Función dentro de función!* 🔄

---

## 📋 Información general

| Campo | Detalle |
|---|---|
| 📦 Módulo | C 05 |
| 🔖 Versión | 7 |
| ⚙️ Compilación | `cc -Wall -Wextra -Werror` |
| 📏 Norma | `norminette -R CheckForbiddenSourceHeader` |

---

## ⚠️ Normas importantes

- ✅ Todos los archivos `.c` deben incluir el **header estándar de 42**
- ✅ El código debe cumplir la **Norma de 42**
- ✅ Las funciones **no deben terminar inesperadamente** (segfault, bus error, double free)
- ✅ Solo entregar los archivos indicados en cada ejercicio

---

## 📚 Ejercicios

### ✏️ Ejercicio 00 — `ft_iterative_factorial`

| | |
|---|---|
| 📁 Directorio | `ex00/` |
| 📄 Archivo | `ft_iterative_factorial.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Función **iterativa** que devuelve el factorial del número pasado como parámetro. Devuelve `0` si el argumento no es válido. No gestionar overflow.

```c
int ft_iterative_factorial(int nb);
```

---

### ✏️ Ejercicio 01 — `ft_recursive_factorial`

| | |
|---|---|
| 📁 Directorio | `ex01/` |
| 📄 Archivo | `ft_recursive_factorial.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Función **recursiva** que devuelve el factorial del número pasado como parámetro. Devuelve `0` si el argumento no es válido. No gestionar overflow.

```c
int ft_recursive_factorial(int nb);
```

---

### ✏️ Ejercicio 02 — `ft_iterative_power`

| | |
|---|---|
| 📁 Directorio | `ex02/` |
| 📄 Archivo | `ft_iterative_power.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Función **iterativa** que devuelve `nb` elevado a `power`.

```c
int ft_iterative_power(int nb, int power);
```

**Reglas:**
- 🔹 Si `power < 0` → devuelve `0`
- 🔹 `0^0 = 1`
- 🔹 No gestionar overflow

---

### ✏️ Ejercicio 03 — `ft_recursive_power`

| | |
|---|---|
| 📁 Directorio | `ex03/` |
| 📄 Archivo | `ft_recursive_power.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Función **recursiva** que devuelve `nb` elevado a `power`.

```c
int ft_recursive_power(int nb, int power);
```

**Reglas:**
- 🔹 Si `power < 0` → devuelve `0`
- 🔹 `0^0 = 1`
- 🔹 No gestionar overflow

---

### ✏️ Ejercicio 04 — `ft_fibonacci`

| | |
|---|---|
| 📁 Directorio | `ex04/` |
| 📄 Archivo | `ft_fibonacci.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Función **recursiva** que devuelve el elemento de índice `index` de la sucesión de Fibonacci. El primer elemento está en el índice `0`.

```c
int ft_fibonacci(int index);
```

**La sucesión comienza:** `0, 1, 1, 2, 3, 5, 8, 13, ...`

**Reglas:**
- 🔹 Si `index < 0` → devuelve `-1`
- 🔹 No gestionar overflow

---

### ✏️ Ejercicio 05 — `ft_sqrt`

| | |
|---|---|
| 📁 Directorio | `ex05/` |
| 📄 Archivo | `ft_sqrt.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve la **raíz cuadrada entera** de un número si existe, o `0` si la raíz cuadrada no es entera.

```c
int ft_sqrt(int nb);
```

> 💡 Ejemplo: `ft_sqrt(9)` → `3`, `ft_sqrt(8)` → `0`

---

### ✏️ Ejercicio 06 — `ft_is_prime`

| | |
|---|---|
| 📁 Directorio | `ex06/` |
| 📄 Archivo | `ft_is_prime.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve `1` si el número es **primo**, `0` si no lo es.

```c
int ft_is_prime(int nb);
```

> ⚠️ `0` y `1` **no son números primos**.

---

### ✏️ Ejercicio 07 — `ft_find_next_prime`

| | |
|---|---|
| 📁 Directorio | `ex07/` |
| 📄 Archivo | `ft_find_next_prime.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Devuelve el número primo **inmediatamente superior o igual** al número pasado como parámetro.

```c
int ft_find_next_prime(int nb);
```

---

### ✏️ Ejercicio 08 — Las diez damas

| | |
|---|---|
| 📁 Directorio | `ex08/` |
| 📄 Archivo | `ft_ten_queens_puzzle.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra **todas las posibilidades** de colocar 10 damas en un tablero de 10×10 sin que se ataquen entre sí. Devuelve el número de posibilidades. Debe usar **recursividad**.

```c
int ft_ten_queens_puzzle(void);
```

**Formato de salida:** Los dígitos representan la posición (fila) de cada dama por columna, empezando en índice `0`.

```
0257948136
0258693147
...
9742051863
```

---

## 📦 Entrega

Entrega tu proyecto en tu **repositorio Git**. Solo se evaluará el trabajo del repositorio. Verifica los nombres de los archivos antes de hacer push. 🚀
