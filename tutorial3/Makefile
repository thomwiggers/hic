# make voert bij default trouwens het eerste recept uit

# deze maakt niet echt een bestand,
# is dus 'phony', 'nep'
.PHONY: all
all: parsegenome fietsband 

# 'target':   'ingredienten': kunnen ook andere targets zijn!
parsegenome: parsegenome.c
	#'recept'
# ⤺ hier moet trouwens een tab voor
	gcc -o parsegenome parsegenome.c

fietsband: rubber.c spaken.c
	doedingenmetrubberenspaken
