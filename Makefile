
CFLAGS = -Wall -Werror
MENU_O = sous_menu.o menu.o
GESTION_O = gestionMatiere.o gestionClasse.o gestionEtudiant.o gestionNote.o

Egestion: ${MENU_O}  ${GESTION_O} main.o
	@gcc moduleObjet/*.o -o Egestion

main.o: main.c
	@gcc -c $< -o moduleObjet/$@

gestionClasse.o: gestionClasse/gestionClasse.c
	@gcc -c $< -o moduleObjet/$@

gestionMatiere.o: gestionMatiere/gestionMatiere.c
	@gcc -c $< -o moduleObjet/$@

gestionEtudiant.o: gestionEtudiant/gestionEtudiant.c
	@gcc -c $< -o moduleObjet/$@

gestionNote.o: gestionNote/gestionNote.c
	@gcc -c $< -o moduleObjet/$@

menu.o: menu/menu.c
	@gcc -c $< -o moduleObjet/$@

sous_menu.o: menu/sous_menu.c
	@gcc -c $< -o moduleObjet/$@

clean:
	@rm -f moduleObjet/*.o Egestion

exec:
	@./Egestion Honorablecon