#include <stdio.h>                  // 1) Capire cosa fa il programma senza eseguirlo.
   
void menu ();                       // Il programma permette di fare,in base alla scelta dell'opzione,
void moltiplica ();                 // dei calcoli di moltiplicazione,divisione con i valori inseriti dall'utente
void dividi ();                     // e di inserire delle stringhe.
void ins_string();
                                    // 2) Individuare dal codice sorgente le casistiche non standard che il programma non gestisce
                                    //    (esempio, comportamenti potenziali che non sono stati contemplati).    
int main ()                         
                                    // Il programma potrebbe non funzionare correttamente nel senso che durante la simulazione   
{                                   // potrebbe finire ancora prima di arrivare fino alla fine del programma scritto;potrebbe anche    
	char scelta = {'\0'};           // succedere che ci sia già la risposta anche se l'utente non abbia ancora messo un valore.
	menu ();                        
	scanf ("%d", &scelta); // <---      // 3) Individuare eventuali errori di sintassi / logici.- 4) Proporre una soluzione per
                             //  |      // ognuno di essi.
	switch (scelta)          //  |       
	{                        //  |      Righe:14,47,48,52,64,66,77;
		case 'A':            //  |     
		moltiplica();        //  -------- no %d(=int)ma %c(=char),dato che 'scelta' è una variabile di tipo char.        
		break;                       
		case 'B':                   
                dividi();
                break;
		case 'C':
                ins_string();        
                break;              
	}


return 0;

}

void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	short int  a,b;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);                                       //<---------- no %f(=float)e %d(=int) ma %hd(=short),dato che 'a' e 'b' 
	scanf ("%d", &b);                                       //<----↲       sono variabili di tipo short int.
                                                                                                            // |
	short int prodotto = a * b;                                                                             // |
                                                                                                            // |
	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);  //<--------- no %d(=int) ma %hd(=short)  <----- ↲                  
}                                                 // ↑
                                                  // -----'a' e 'b' da togliere perchè quando viene simulato mostra il risultato del
                                                        // prodotto e i valori messi dall'utente.
void dividi ()
{
        int  a,b;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	    printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a % b;                            //<---------- no % ma / perchè % è segno di modulo cioè mostra il resto 
                                                                     // della divisione e non il risultato l'operazione di divisione.
        printf ("La divisione tra %d e %d e': %d", a,b,divisione);    //<------ 'a' e 'b' dato togliere perchè quando viene simulato 
}                                                                            // non mostra solo il risultato della divisione ma  
                                                                             // anche i valori messi dall'utente.




void ins_string () 
{
	char stringa[10];                                                      
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);                  //<--------- no %s(=string) ma %c(=char),dato che la variabile è una char allora
}                                                          // l'argomento deve a sua volta essere di tipo char.              







