#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(){

//pid - process id
	pid_t pid;
	int exitStatus=123;
	
	//POZIVAMO FORK
	switch(pid = fork()){
		case -1:
		printf("Fork error!\n");
				
		case 0:
		printf("Child: This is child process with PID %d\n", getpid());
		
		//Sistemski poziv exec pokrece drugi program koji mu dodelimo kao argument (u okviru trenutnog procesa, ima isti PID).
		//Postoje razlicite varijacije exec poziva: execl, execlp, execv, execvpe...
		//U sledecim primerima je pozvan execlp() (l - list) kome se moze proslediti promenljiv broj argumenata 
		//(poslednji mora biti NULL).
		//Poziv execv (v - vector) prima niz argumenata (arg[]).
		//Prvi parametar kod execlp() predstavlja fajl programa koji se izvrsava, a drugi komandu kojom se pokrece.
		//Posto koristimo execlp() (p-path), ne moramo unositi apsolutnu putanju do programa koji pokrecemo.
		//Ukoliko bismo koristili execl(), onda bismo kao prvi argument prosledili npr. "/bin/program_koji_pokrecemo".
		//Ostali argumenti mogu biti opcije koje prosledjujemo programu (pogledati primer 3).
		//Za vise detalja pogledati: man exec
		
		//1. Sledeca linija pokrece Geany IDE, ako je instaliran na Vasem racunaru
		execlp("geany", "geany", NULL);
		//Proverite prvu tvrdnju pomocu ps aux | grep geany. PID Geany procesa ce biti isti kao PID child procesa.
		
		//2. Sledeca linija prikazuje kalendar za trenutni mesec.
		//execlp("cal", "cal", NULL);
		
		//3. Sledeca linija prikazuje sadrzaj trenutnog direktorijuma sa detaljima
		//execl("/bin/ls", "ls", "-l", NULL);
		
		exit(exitStatus);
		
		default:
		printf("Parent: This is parent process with PID %d\n", getpid());
		printf("Parent: My child's PID is %d\n", pid);
		wait(&exitStatus);
		printf("Parent: Bye!\n");
	}
	
	return 0;

}
