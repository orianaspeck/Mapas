#include <stdio.h>
//#include <conio.h>
#define infinito 99999
//#define max 10

typedef struct {
	char valor;	//lo que contiene el nodo
	int pie;
	int carro;
	int bus;
	int bandera;
}
	/*matriz adyacente con los costos de las rutas
	creo que habria que hacer 3 matrices adyacentes,
	una por cada costo*/
// MAP matri adyacente a pie
int Dijkstra_pie(MAP, int cantNodos, NodoInicial){
int costos[max][max], distancia[max],anteriores[max], visitados[max],cont,DistMinima,next,i,j;
//anterior[] guarda el nodo anterior al actual
//cont cantidad de nodos visitados hasta ahora

	for(i=0;i<cantNodos;i++)
        	for(j=0;j<cantNodos;j++)
            		if(MAP[i][j]==0)
        		        costos[i][j]=infinito;
			else
		                costos[i][j]=MAP[i][j];
//inicializa anteriores[],distancia[] and visitados[]
    	for(i=0;i<cantNodos;i++){
	        distancia[i]=costos[NodoInicial][i];
		anteriores[i]=NodoInicial;
	        visitados[i]=0;
	}    
	distancia[NodoInicial]=0;
	visitados[NodoInicial]=1;
	cont=1;

	while(cont<cantNodos-1)
    {
        DistMinima=infinito;
        
        //next da el nodo con la menor distancia
        for(i=0;i<cantNodos;i++)
            if(distancia[i]<DistMinima&&!visitadosi])
            {
                DistMinima=distancia[i];
                next=i;
            }
            
            //se verifica si hay un mejor camino con next 
            visitados[next]=1;
            for(i=0;i<cantNodos;i++)
                if(!visitados[i])
                    if(DistMinima+costos[next][i]<distancia[i])
                    {
                        distancia[i]=DistMinima+costos[next][i];
                        anteriores[i]=next;
                    }
        cont++;
    }

}
//MAC Matriz Adyacente a carro
int Dijkstra_carro(MAC, int cantNodos, NodoInicial){
int costos[max][max], distancia[max],anteriores[max], visitados[max],cont,DistMinima,next,i,j;
//anterior[] guarda el nodo anterior al actual
//cont cantidad de nodos visitados hasta ahora

	for(i=0;i<cantNodos;i++)
        	for(j=0;j<cantNodos;j++)
            		if(MAP[i][j]==0)
        		        costos[i][j]=infinito;
			else
		                costos[i][j]=MAP[i][j];
//inicializa anteriores[],distancia[] and visitados[]
    	for(i=0;i<cantNodos;i++){
	        distancia[i]=costos[NodoInicial][i];
		anteriores[i]=NodoInicial;
	        visitados[i]=0;
	}    
	distancia[NodoInicial]=0;
	visitados[NodoInicial]=1;
	cont=1;

	while(cont<cantNodos-1)
    {
        DistMinima=infinito;
        
        //next da el nodo con la menor distancia
        for(i=0;i<cantNodos;i++)
            if(distancia[i]<DistMinima&&!visitadosi])
            {
                DistMinima=distancia[i];
                next=i;
            }
            
            //se verifica si hay un mejor camino con next 
            visitados[next]=1;
            for(i=0;i<cantNodos;i++)
                if(!visitados[i])
                    if(DistMinima+costos[next][i]<distancia[i])
                    {
                        distancia[i]=DistMinima+costos[next][i];
                        anteriores[i]=next;
                    }
        cont++;
    }

}

//MAB Matriz Adyacente a bus
int Dijkstra_bus(MAB, int cantNodos, NodoInicial){
int costos[max][max], distancia[max],anteriores[max], visitados[max],cont,DistMinima,next,i,j;
//anterior[] guarda el nodo anterior al actual
//cont cantidad de nodos visitados hasta ahora

	for(i=0;i<cantNodos;i++)
        	for(j=0;j<cantNodos;j++)
            		if(MAP[i][j]==0)
        		        costos[i][j]=infinito;
			else
		                costos[i][j]=MAP[i][j];
//inicializa anteriores[],distancia[] and visitados[]
    	for(i=0;i<cantNodos;i++){
	        distancia[i]=costos[NodoInicial][i];
		anteriores[i]=NodoInicial;
	        visitados[i]=0;
	}    
	distancia[NodoInicial]=0;
	visitados[NodoInicial]=1;
	cont=1;

	while(cont<cantNodos-1)
    {
        DistMinima=infinito;
        
        //next da el nodo con la menor distancia
        for(i=0;i<cantNodos;i++)
            if(distancia[i]<DistMinima&&!visitadosi])
            {
                DistMinima=distancia[i];
                next=i;
            }
            
            //se verifica si hay un mejor camino con next 
            visitados[next]=1;
            for(i=0;i<cantNodos;i++)
                if(!visitados[i])
                    if(DistMinima+costos[next][i]<distancia[i])
                    {
                        distancia[i]=DistMinima+costos[next][i];
                        anteriores[i]=next;
                    }
        cont++;
    }

}
void Dijkstra( int cantNodos, char NodoInicial){
	
}
