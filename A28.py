#	+---------------------------------------------------+
#	| Ksenija Kopteva, kk21130                          |
#	+---------------------------------------------------+
#	| A28.Dots naturāls skaitlis n. Izdrukāt dotajam    |
#	| skaitlim simetrisku skaitli. Skaitļa dalīšana	    |
#	| ciparos jāveic skaitliski. (Piemēram, skaitlim    |
#	| 2341 simetriskais skaitlis ir 1432).              |
#	+---------------------------------------------------+
#	| Programma izveidota : 2021 / 09 / 15              |
#	+---------------------------------------------------+

skaitlis = 0

# cikls, kas nosaka, lai programma atkārtotos
while True:

    # cikls, kur tiek parbaudīts, vai ir ievadīts naturāls skaitlis
    while True:
        skaitlis = input("Ievadiet naturālo skaitli: \n")
        if skaitlis.isdigit():
            int(skaitlis)
            break
        else:
            print("Ievadītie dati nav korekti. ", )

    # mainīgais atlikumam, kas būs nepieciešams aprēķinos, un gala rezultātam
    atlikums = 0
    simetrisks_skaitlis = 0

    # aprēķinu bloks, kur skaitlis dalās ar 10 un ar atlikumu palīdzību pārvēršas par simetrisku skaitli
    while skaitlis != 0:
        atlikums = int(skaitlis) % 10
        simetrisks_skaitlis = int(simetrisks_skaitlis) * 10 + int(atlikums)
        skaitlis = int(int(skaitlis) / 10)

    print("Simetrisks skaitlis ir {}.\n".format(simetrisks_skaitlis))

    iziet = input("Vai turpināt (1) vai beigt (0)?\n")
    if int(iziet) != 1:
        break

#                   Testa plāns kopā ar testēšanas rezultātiem
#   +--------+-----------------------------+---------------+------------------+
#   | Ievads | Programmas vēlāmā reakcija  | Rezultāts C++ | Rezultāts Python |
#   +--------+-----------------------------+---------------+------------------+
#   | 2341   | 1432                        | +             | +                |
#   | 0      | 0                           | +             | +                |
#   | -256   | Ievadītie dati nav korekti. | +             | +                |
#   | asd    | Ievadītie dati nav korekti. | +             | +                |
#   | _./    | Ievadītie dati nav korekti. | +             | +                |
#   +--------+-----------------------------+---------------+------------------+

