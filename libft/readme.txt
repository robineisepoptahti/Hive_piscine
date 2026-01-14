##############
###FUCTIONS###
##############

bzero:      Nollaa listan. Poistettu Std:sta koska esim memset tekee saman paremmin.


memccpy:    Kopio merkkijonon kirjaimeen c asti , tai n määrän ja palauttaa sen jälkeisen osion pointerin. Ei lisää NULL pointeria, palauttaa Nullin jos ei kontenttia kopion jälkeen. 
            HUOM: string libraryn versio heittää errorin jos n tai c ei toteudu.
        
memalloc:   Käytännössä calloc, jolla on input parametrinä ainoastaan bytemäärä.

memchr:     Etsii annettua kirjainta Stringistä, ja palauttaa pointerin siihen jos merkki löytyy. Muuten palauttaa NULL.

memcmp:     Vertaa merkkijonoja. Ei pysähdy nulliin, mutta on udf behaviour jos menee stringin yli.

memcpy:     Kopioi stringin toiseen arrayhyn. Undefined n jälkeen. Palauttaa uuden arrayn pointerin. Tehokkaampi kuin memmove, muttei käsitteleoverlappia. 

memdel:     Vapauttaa pointerin, ja muuttaa sen NULL:iksi. 

memmove:    Kopioi stringin. Sama kuin memcpy, mutta käsittelee myös mahdollisen overlapin, eli jos src ja dest on samassa arrayssa päällekkäin. 

memset:     Muunttaa n määrän bytejä halutuksi merkiksi. Hyvä tietojen puhdistukseen tai nollamiseen.

putchar:    Tulostaa kirjaimen. Ei tulosta esim ä taiö merkkejä, siihen on putstr.

calloc:     Sama kuin memalloc, paitsi että ottaa tiedostokoon sijasta parametreinä datatyypin koon ja itemejen määrän.

putnbr_base:    Muuntaa halutin numeron halutun radiksin numeroksi. Mittaa siis basen radixin pituudesta. Ottaa buffferin sisään. Palauttaa uuden pituuden (sisältää null), mikäli halutaan reallocoida tyhjät tilat pois.


STRING FORMATTING


strdup:     Mallocoi ja tilaa merkkijonolle, ja lisää sen sinne. Palauttaa pointterin.

strlcat:    Konkatenoi merkkijonot yhteen n pituiseksi. Palauttaa pituuden, mikä olisi tullut jos dest ja src olisi yhdistetty koko pituudessaan.

strndup:     Mallocoi ja tilaa merkkijonolle, ja lisää sen sinne. Palauttaa pointterin.

strlowcase: Muuttaa pieniksi kirjaimiksi.

strupcase:  Muuttaa isoiksi kirjaimiksi.

strchr:     Etsii ensimmäisen c characteria vastaavan merkin, ja palauttaa sen sijainnin. Muuten NULL.

strrchr:     Etsii viimeisen c characteria vastaavan merkin, ja palauttaa sen sijainnin. Muuten NULL.

strstr:     Etsii substringin stringistä. 

strnstr:     Etsii substringin stringistä, stringin n ensimmäisistä merkeistä. 

strnew:     Luo ja mallocoi uuden stringin (size + '\0'), joka nollataan ja palautetaan. 

strclr:     Nollaa stringin.

striter:    Ottaa sisään stringin ha funktion. Ajaa stringin jokaisen kirjaimen funktion läpi.

striteri:    Ottaa sisään stringin ha funktion. Ajaa stringin jokaisen kirjaimen funktion läpi, funktio ottaa sisään  myös indexin.

strequ:     Muuten sama kuin strcmp, mutta palauttaa joko 1 jos molemmat stringit ovat täysin samat, tai 0 jos niissä on eroa.

strnequ:     Muuten sama kuin strcmp, mutta palauttaa joko 1 jos molemmat stringit ovat täysin samat, tai 0 jos niissä on eroa. Vertaa n määrän.

substr:     Kopioi pätkän tiestystä indeksistä uudeksi mallocoiduksi stringiksi.

strsplit:   Jakaa stringin delimiterin avulla mallokoituihin osiin, jotka sovellus palauttaa mallokoidussa arrayssa. Muuten palauttaa NULL.





