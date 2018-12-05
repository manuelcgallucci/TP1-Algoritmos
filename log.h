#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdlib.h>

#include "verificar_argumentos.h"

#define MSJ_VACIO ""
#define MSJ_ERROR_PUNTERO_NULO "Puntero nulo."
#define MSJ_ERROR_NOMBRE_INVALIDO "El nombre ingresado es invalido." //lo voy a eliminar!
#define MSJ_ERROR_PROTOCOLO "El protocolo ingresado es invalido."
#define MSJ_ERROR_ARCHIVO_ENTRADA "El archivo de entrada es invalido." 
#define MSJ_ERROR_ARCHIVO_SALIDA "El archivo de salida es invalido."
#define MSJ_ERROR_ARCHIVO_LOG "El archivo log es invalido."
#define MSJ_ERROR_CANTIDAD_MSJ "La cantidad de mensajes no es valido."
#define MSJ_ERROR_CANT_ARG_INVALIDO "La cantidad de argumentos ingresados es invalido."
#define MSJ_ERROR_ARG_INVALIDO "El argumento ingresado es invalido, pruebe ingresando el comando -h para obtener ayuda." 
#define MSJ_ERROR_LECTURA "No se pudo leer el archivo"

/*
para los debug
#define MSJ_DEBUG_BUSCANDO_SINCRONISMO "Buscando los 2 bytes de sincronismo." 
#define MSJ_DEBUG_ID "Se detecta un determinado ID."
#define MSJ_DEBUG_RECOLECTO_MSJ "Se recolectò un mensaje."
#define MSJ_DEBUG_CARGO_MSJ "Se cargó un mensaje en la lista."
#define MSJ_DEBUG_IMPRIMIO_MSJ "Se imprimió un mensaje."
etc.
*/
#define MSJ_WARN_LISTA_LLENA "Se descarta un mensaje por lista llena."


#define MSJ_WARN_CARACTER_NO_INICIAL "El caracter no es el inicial"
#define MSJ_WARN_SENTENCIA_INVALIDA "La sentencia no es valida"         
#define MSJ_WARN_CARACTER_ESTADO "El caracter estatus no es correcto" 
#define MSJ_WARN_HORARIO "El horario no es correcto."
#define MSJ_WARN_CARACTER_LATITUD "El caracter latitud no es correcto."
#define MSJ_WARN_LATITUD "La latitud no es correcta" 
#define MSJ_WARN_CARACTER_LONGITUD "El caracter longitud no es correcto."
#define MSJ_WARN_LONGITUD "La longitud no es correcta" 
#define MSJ_WARN_FIX_INVALIDO "Un mensaje contiene un ﬁx inválido"
#define MSJ_WARN_CANT_SATELITES "La cantidad de satelites no es correcta"
#define MSJ_WARN_ELEVACION "La elevacion no es correcta"
#define MSJ_WARN_CARACTER_METRO "El caracter metro es incorrecto"
#define MSJ_WARN_HDOP "El HDOP no es correcto"
#define MSJ_WARN_SEPARACION_GEOGRAFICA "La separacion geografica no es correcta" 
#define MSJ_WARN_FECHA "La hora no es la correcta."
#define MSJ_WARN_MES "El mes no es correcto."
#define MSJ_WARN_ANIO "El anio no es correcto."
#define MSJ_WARN_DIA "El dia no es correcto."
#define MSJ_WARN_ZONA_HORARIA "La zona horaria no es correcta."
//Archivo invalido
//Puntero nulo
//Error clase
#define MSJ_WARN_ID "No se reconoce un ID"
//Largo
#define MSJ_WARN_SUMA_VERIFICACION " Suma de verificacion invalida"
#define MSJ_WARN_VAL_FLAGS "Validacion del flag incorrecta"//PR_ERR_VALID_FLAGS, 
#define MSJ_WARN_VAL_FIX "Validacion incorrecta del fix"//PR_ERR_VALID_FIX
//PUE_NOT
//PR_DEBUG 

#define MSJ_FIN "FIN" //Corresponde a pf_fin
#define MSJ_ERROR "error" //Corresponde a pf_err



void imprimir_msj_errores_log(status_t *mensaje, FILE *archivo_log, metadata_t *datos_usuario);
/* Dependiendo del estado que reciba, imprime el correspondiente mensaje en el
 * archivo log. Los mensajes pueden ser: 
 * ERROR: Son errores graves que ocurren durante la ejecució
 * DEBUG: Son mensajes de información sobre lo que está haciendo el programa. 
 * WARN: Son avisos que ocurren durante la ejecucion 
 * Por defecto, la impresion sale por stderr. 
 * Recibe un estado, un puntero al archivo log y la estrustura datos_usuario,
 * donde se imprime la hora y fecha de cuando ocurren los mensajes.
*/

void imprimir_msj_warn_log (procesar_t *mensaje, FILE *archivo_log, metadata_t *datos_usuario);

#endif