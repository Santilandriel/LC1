/*Algoritmo Principal_main
	//Definición de variables locales y globales que se utilizan a lo largo del código 
	Definir Dni,opcionMenu,opcionDia,opcionHorario,opcionVacuna,contadorPacientes,indiceMinimo Como Entero
	Definir tipoOrden Como Caracter
	Definir vacunaElegida,DiaElegido,HorarioElegido,vacuna,salida,turnos,aux Como Cadena
	Dimension datosPacientes[100,6],vacuna[6],horario[7],dia[5],turnos[5,8]
	contadorPacientes = 0
	//Precarga de datos turnos como arreglo bidimensional
	cargaDatos(vacuna,turnos) 
	//Inicializamos el contador de vacunas de los 6 tipos
	Definir contadorVacunas Como Entero
	Dimension contadorVacunas[6]
	Para i<-0 hasta 5 Hacer
		contadorVacunas[i]= 0;
	Fin Para
	Escribir "================================================================================"
	//Menu de Bienvenida.
	Escribir "Bienvenido al vacunatorio UTN"
	Repetir
		Escribir "================================================================================"
		Escribir "Menu principal de opciones:"
		Escribir "1-Reservar turno"
		Escribir "2-Buscar paciente"
		Escribir "3-Ver agenda vacunatorio"
		Escribir "4-Ordenar y mostrar listas de pacientes"
		Escribir "5-Listados"
		leer opcionMenu
		Escribir "================================================================================"
		//Utilizamos una estructura switch para las distintas opciones del menú
		Segun opcionMenu
			1: //Subproceso utilizado para gestionar la reservas de turnos y la carga de pacientes
				turnoReserva(turnos,vacuna,datosPacientes,opcionDia,opcionHorario,opcionVacuna,contadorPacientes,contadorVacunas)//penar opcion copmo una sola
			2: //Subproceso utilizado para realizar la busqueda de un paciente por DNI
				busquedaPorDni(datosPacientes,contadorPacientes)
			3: //Subproceso que arroja la agenda marcando los turnos disponibles y ocupados
				agendaDeDisponibilidad(turnos)
			4: //Subproceso que ordena los pacientes ingresados por EDAD y por VACUNA
				ordenarPacientes(aux,tipoOrden,indiceMinimo,datosPacientes, contadorPacientes,vacuna)
			5: //Subproceso que muestra la cantidad de turnos otorgados por día y por vacuna  
				listados(contadorVacunas, turnos, vacuna)
			De Otro Modo: 
				Escribir"Opción no válida" 
		FinSegun
		Repetir //Opción de salida que permite al usuario continuar o salir 
			Escribir "Ingrese /SALIR/ si desea salir del sistema o /SEGUIR/ si desea volver al menú principal"
			Leer salida
			salida =  Mayusculas(salida) //Validación de la opción de salida
		Mientras Que salida <> "SALIR" y salida <> "SEGUIR" // El menú se repite mientras el usuario ingrese incorrectamente el paso a seguir
	Mientras Que salida <> "SALIR" O opcionMenu > 5 O opcionMenu < 1 
	
	Escribir "Gracias por visitar el sistema de turnos del vacunatorio UTN"
	Escribir "Saliendo del sistema ..."
FinAlgoritmo

//funcion1-turnoreserva
SubProceso turnoReserva(turnos,vacuna,datosPacientes,opcionDia,opcionHorario,opcionVacuna,contadorPacientes Por Referencia,contadorVacunas Por Referencia)
	Definir disponibilidadVacuna Como Logico
	disponibiidadVacuna = falso
	Repetir
        agendaDeDisponibilidad(turnos)
		//Seleccion de turno.
        Repetir
            Escribir"Ingrese el día y horario del turno que desea reservar(ejemplo 4 7)"
            leer opcionDia, opcionHorario
            Si opcionDia < 1 o opcionDia > 5 o opcionHorario < 1 o opcionHorario > 7 
                Escribir"Ingresó una opción incorrecta, por favor vuelva a seleccionar otro turno"
            FinSi
        Mientras Que opcionDia < 1 o opcionDia > 5 o opcionHorario < 1 o opcionHorario > 7 //Validación para que ingrese una opción correcta
        Si turnos[opcionDia - 1,opcionHorario] == "OCUPADO" Entonces 
            Escribir "Ese turno no se encuentra disponible,vuelva a ingresar otro"
        FinSi 
    Mientras Que turnos[opcionDia -1,opcionHorario] = "OCUPADO" //Validamos que no se asigne un turno ocupado
	
	//Menu de opciones vacuna.
	Repetir
		Escribir "================================================================================"
        Escribir"Opciones Vacuna" //Imprimimos el listado de vacunas 
        Para i = 0 Hasta 5 con paso 1 Hacer
            Escribir i + 1, " ", vacuna[i]
        FinPara
        Escribir "Seleccione una opción"
        Leer opcionVacuna
        Si opcionVacuna < 1 o opcionVacuna > 6 Entonces
            Escribir"Ingreso una opción no válida, ingrese una opción correcta"
        FinSi
    Mientras Que (opcionVacuna <  1 O opcionVacuna > 6) //Validamos que ingrese una opción correcta
	Si contadorVacunas[opcionVacuna - 1] < 10 Entonces // Corroboramos el stock de vacunas 
		contadorVacunas[opcionVacuna - 1] = contadorVacunas[opcionVacuna - 1] + 1 
		disponibilidadVacuna = Verdadero
	SiNo
		Escribir"No contamos con stock de la vacuna seleccionada"
	FinSi
	Escribir "================================================================================"
	Si disponibilidadVacuna Entonces //Si existe disponibilidad de la vacuna elegida solicitamos el ingreso de los datos del paciente
		Repetir
			Escribir"Ingrese su nombre:"
			leer datosPacientes[contadorPacientes,0]
		Mientras Que datosPacientes[contadorPacientes,0] = ""//validamos que no ingrese un vacio
		Repetir
			Escribir"Ingrese Dni:"
			leer datosPacientes[contadorPacientes,1]
			Si Longitud(datosPacientes[contadorPacientes,1]) < 6 o longitud(datosPacientes[contadorPacientes,1]) > 8 Entonces
				Escribir "DNI no válido, ingrese el DNI nuevamente"
			FinSi
		Mientras Que Longitud(datosPacientes[contadorPacientes,1]) < 6 o longitud(datosPacientes[contadorPacientes,1]) > 8
		Repetir
			Escribir"Ingrese edad: (0.x, en el caso pacientes menores al año)"
			leer datosPacientes[contadorPacientes,2]
			Si ConvertirANumero(datosPacientes[contadorPacientes,2]) > 100 O ConvertirANumero(datosPacientes[contadorPacientes,2]) < 0 Entonces
				Escribir"ingreso una edad no valida"
			FinSi
		Mientras Que ConvertirANumero(datosPacientes[contadorPacientes,2]) > 100 O ConvertirANumero(datosPacientes[contadorPacientes,2]) < 0
		datosPacientes[contadorPacientes,3] = vacuna[opcionVacuna - 1]
		datosPacientes[contadorPacientes,4] = turnos[opcionDia - 1,0]
		datosPacientes[contadorPacientes,5] = turnos[opcionDia - 1,opcionHorario]
		Escribir "================================================================================"
		//Impresión de resumen con datos del paciente, turno y vacuna seleccionada
		Escribir "Resumen...."
		Escribir "Nombre y Apellido: ",datosPacientes[contadorPacientes,0]
		Escribir "Dni: ",datosPacientes[contadorPacientes,1]
		Escribir "Edad: ",datosPacientes[contadorPacientes,2]
		Escribir "Vacuna a aplicar:",datosPacientes[contadorPacientes,3]
		Escribir "Día turno: ",datosPacientes[contadorPacientes,4]
		Escribir "Horario Turno: ",datosPacientes[contadorPacientes,5]
		turnos[opcionDia -1,opcionHorario] = "OCUPADO" 
		contadorPacientes = contadorPacientes + 1	
		Escribir "================================================================================"
	Fin Si
	
FinSubProceso

//funcion de busqueda por dni
SubProceso busquedaPorDni(datosPacientes,contadorPacientes)
	Definir encontrado Como Logico
	Definir posicionEncontrado Como Entero
	encontrado = falso
	Definir numDocumento Como cadena
	Repetir
		Escribir "Ingrese el DNI del paciente:"
		leer numDocumento
		Si Longitud(numDocumento) < 6 o longitud(numDocumento) > 8 Entonces
			Escribir "DNI no valido, ingrese el DNI nuevamente"
		FinSi
	Mientras Que Longitud(numDocumento) < 6 o longitud(numDocumento) > 8
	Para i = 0 hasta contadorPacientes con paso 1 Hacer
		Si datosPacientes[i,1] == numDocumento Entonces
			posicionEncontrado = i
			encontrado = verdadero
	    FinSi
	FinPara
	Si encontrado = Verdadero Entonces //Arroja los datos del paciente si es que el DNI fue cargado
		Escribir "Nombre y Apellido: ",datosPacientes[posicionEncontrado,0]
		Escribir "Dni: ",datosPacientes[posicionEncontrado,1]
		Escribir "Edad: ",datosPacientes[posicionEncontrado,2]
		Escribir "Vacuna a aplicar:",datosPacientes[posicionEncontrado,3]
		Escribir "Día turno: ",datosPacientes[posicionEncontrado,4]
		Escribir "Horario Turno: ",datosPacientes[posicionEncontrado,5]
	SiNo
		Escribir"Número de documento no encontrado"
	FinSi
	Escribir "================================================================================"
FinSubProceso

//Subproceso de agenda de disponibilidad
SubProceso agendaDeDisponibilidad(turnos)
	Escribir "Estos turnos corresponden a la siguiente semana"
	Escribir"Agenda disponible del vacunatorio"
	Para i = 0 Hasta 4 con paso 1 Hacer
		Escribir sin saltar,i + 1,"-",turnos[i,0] " "
		Para x = 1 Hasta 7 con paso 1 Hacer
			Escribir Sin Saltar x,".",turnos[i,x] " - "
		FinPara
		Escribir""
	FinPara
	Escribir "================================================================================"
FinSubProceso

//Subproceso ordenar
SubProceso ordenarPacientes(aux,tipoOrden,indiceMinimo,datosPacientes,contadorPacientes Por Referencia,vacuna)
	Repetir
		Escribir "Menu de ordenamiento:"
		Escribir "A-Si desea ordenar pacientes por edad"
		Escribir "B-Si desea ordenar pacientes por vacuna"
		leer tipoOrden
		tipoOrden =  Mayusculas(tipoOrden) //Validación caracter ingresado 
		Si Mayusculas(tipoOrden) <> "A" y Mayusculas(tipoOrden) <> "B" Entonces
			Escribir "Ingreso una opción no existente"
		FinSi
	Mientras Que Mayusculas(tipoOrden) <> "A" y (tipoOrden) <> "B"
	Escribir "================================================================================"
	Si tipoOrden == "A" Entonces
		Para i = 0 Hasta contadorPacientes - 2// Se realiza una busqueda por seleccion para ordenar por edad
			indiceMinimo = i
			Para j = i + 1 Hasta contadorPacientes -1
				Si ConvertirANumero(datosPacientes[j, 2]) < ConvertirANumero(datosPacientes[indiceMinimo, 2]) Entonces
					indiceMinimo = j
				FinSi
			FinPara
			Para x = 0 Hasta 5 con paso 1 Hacer 
				aux = datosPacientes[i, x]
				datosPacientes[i, x] = datosPacientes[indiceMinimo, x]
				datosPacientes[indiceMinimo, x] = aux
			FinPara
		FinPara
		Para k = 0 hasta contadorPacientes -1 Hacer//impimimos los datos ordenados
			Escribir Sin Saltar "Nombre Paciente: ",datosPacientes[k,0]," - "
			Escribir Sin Saltar "DNI: ",datosPacientes[k,1]," - "
			Escribir Sin Saltar "Edad: ",datosPacientes[k,2]," - "
			Escribir Sin Saltar "Vacuna a aplicar: ",datosPacientes[k,3]," - "
			Escribir Sin saltar "Día turno: ",datosPacientes[k,4], " - "
			Escribir Sin saltar "Horario Turno: ",datosPacientes[k,5]
			Escribir ""
		FinPara
		
	SiNo
		Si tipoOrden == "B" Entonces
			Para i = 0 hasta 5 Hacer
				Escribir vacuna[i] ":"
				Para x = 0 Hasta contadorPacientes Hacer
					Si datosPacientes[x,3] == vacuna[i] 
						Escribir Sin Saltar "Nombre Paciente: ",datosPacientes[x,0]," - "
						Escribir Sin Saltar "DNI: ",datosPacientes[x,1]," - "
						Escribir Sin Saltar "Edad: ",datosPacientes[x,2]," - "
						Escribir Sin Saltar "Vacuna a aplicar: ",datosPacientes[x,3]," - "
						Escribir Sin saltar "Día turno: ",datosPacientes[x,4], " - "
						Escribir Sin saltar "Horario Turno: ",datosPacientes[x,5]
						Escribir " "
						
					FinSi
				FinPara
			FinPara
		FinSi
	FinSi
	Escribir"================================================================================"
FinSubproceso

//Subproceso listados
SubProceso listados(contadorVacunas, turnos, vacuna)
	Definir contadorTurno Como Entero
	Definir opcionListado Como Caracter
	Escribir "================================================================================"
	Repetir
		Escribir "Menú de opciones"
		Escribir "A-Listado de turnos por día" 
		Escribir "B-Listado de cantidad de vacunas a aplicar por vacuna"
		Leer opcionListado 
		opcionListado = Mayusculas(opcionListado)
		Si opcionListado == "A" Entonces
			Para i = 0 Hasta 4 Hacer
				contadorTurnos = 0
				Para j = 1 Hasta 7 Hacer
					Si turnos[i, j] == "OCUPADO" Entonces
						contadorTurnos = contadorTurnos + 1
					FinSi
				FinPara
				Escribir "Día ", turnos[i, 0], ": Turnos otorgados - ", contadorTurnos
			FinPara	
		FinSi
		Si opcionListado == "B" Entonces
			Para i = 0 Hasta 5 Hacer
				contadorVacuna = contadorVacunas[i]
				Escribir "Vacuna ", vacuna[i], ": Cantidad a aplicar - ", contadorVacuna
			FinPara
		FinSi	
		Si Mayusculas(opcionListado) <> "A" y Mayusculas(opcionListado) <> "B" Entonces
			Escribir "Ingrese una opción correcta" 
		FinSi
	Mientras Que Mayusculas(opcionListado) <> "A" y Mayusculas(opcionListado) <> "B"
FinSubProceso

SubProceso cargaDatos(vacuna,turnos)
	//precarga vacunas.
	vacuna[0] = "Neumococo Conjugada"
	vacuna[1] = "Poliomelitis"
	vacuna[2] = "Quintuple"
	vacuna[3] = "Rotavirus"
	vacuna[4] = "Mengicoco"
	vacuna[5] = "Triple Viral"
	
	//carga de matriz
	turnos[0,0] = "Lunes"
	turnos[0,1]	= "8:00"
	turnos[0,2] = "8:30"
	turnos[0,3]	= "9:00"
	turnos[0,4]	= "9:30"
	turnos[0,5]	= "10:00"
	turnos[0,6]	= "10:30"
	turnos[0,7] = "11:00"
	
	turnos[1,0] = "Martes"
	turnos[1,1]	= "8:00"
	turnos[1,2] = "8:30"
	turnos[1,3]	= "9:00"
	turnos[1,4]	= "9:30"
	turnos[1,5]	= "10:00"
	turnos[1,6]	= "10:30"
	turnos[1,7] = "11:00"
	
	turnos[2,0] = "Miércoles"
	turnos[2,1]	= "8:00"
	turnos[2,2] = "8:30"
	turnos[2,3]	= "9:00"
	turnos[2,4]	= "9:30"
	turnos[2,5]	= "10:00"
	turnos[2,6]	= "10:30"
	turnos[2,7] = "11:00"
	
	turnos[3,0] = "Jueves"
	turnos[3,1]	= "8:00"
	turnos[3,2] = "8:30"
	turnos[3,3]	= "9:00"
	turnos[3,4]	= "9:30"
	turnos[3,5]	= "10:00"
	turnos[3,6]	= "10:30"
	turnos[3,7] = "11:00"
	
	turnos[4,0] = "Viernes"
	turnos[4,1]	= "8:00"
	turnos[4,2] = "8:30"
	turnos[4,3]	= "9:00"
	turnos[4,4]	= "9:30"
	turnos[4,5]	= "10:00"
	turnos[4,6]	= "10:30"
	turnos[4,7] = "11:00"
FinSubProceso*/