#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
sk:
    int a;
    char z[100];
    char u[200] = "210101120022@cutm.ac.in", p[200] = "abhishek";
    char u1[200], p1[200];

    printf("Enter Gmail\n");
    scanf("%s", u1);
    printf("Enter password\n");
    scanf("%s", p1);
    if (strcmp(u, u1) == 0 && strcmp(p, p1) == 0)
    {
        printf("Login Successful\n");
        printf("Created by:- Abhishek Tiwari");
        printf("_________Digital preodic table_________\n");
        printf("[H]                                                                 [He]\n");
        printf("[Li][Be]                                             [B][C][N][O][F][Ne]\n");
        printf("[Na][Mg]                                          [Al][Si][P][S][Cl][Ar]\n");
        printf("[K ][Ca][Sc][Ti][V ][Cr][Mn][Fe][Co][Ni][Cu][Zn][Ga][Ge][As][Se][Br][Kr]\n");
        printf("[Rb][Sr][Y ][Zr][Nb][Mo][Tc][Ru][Rh][Pd][Ag][Cd][In][Sn][Sb][Te][I ][Xe]\n");
        printf("[Cs][Ba][La][Hf][Ta][W ][Re][Os][Ir][Pt][Au][Hg][Tl][Pb][Bi][Po][At][Rn]\n");
        printf("[Fr][Ra][Ac][Rf][Db][Sg][Bh][Hs][Mt][Ds][Rg][Cn][Nh][Fl][Mc][Lv][Ts][Og]\n\n");
        printf("lanthanoid series : [Ce][pr][Nd][Pm][Sm][Eu][Gd][Tb][Dy][Ho][Er][Tm][Yb][Lu]\n");
        printf("Actinoid series   : [Th][Pa][U ][Np][Pu][Am][cm][Bk][Cf][Es][Fm][Md][No][Lr]\n\n\n");
        {
        s:
            printf("\n\n");
            printf("If you wants to more information about element than press '1'\notherwise press '2'\n -->> ");
            scanf("%d", &a);
            if (a == 1)
            {
                printf("enter element name:- ");
                scanf("%s", z);
                char b[10] = "H";
                if (strcmp(b, z) == 0)
                {
                    printf("Name = hydrogen \nNumber = 1 \nGroup = 1 \nPeriod = 1 \nFormula = H\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 1.01\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char B[10] = "He";
                if (strcmp(B, z) == 0)
                {
                    printf("Name = helium\n");
                    printf("Number = 2\n");
                    printf("Group = 18\n");
                    printf("Period = 1\n");
                    printf("Formula = He\n");
                    printf("Charge = 0\n");
                    printf("Mass = 4.00\n");
                    printf("Special = None\n");
                    goto s;
                }
                char C[10] = "Li";
                if (strcmp(C, z) == 0)
                {
                    printf("Name = lithium\n");
                    printf("Number = 3\n");
                    printf("Group = 1\n");
                    printf("Period = 2\n");
                    printf("Formula = Li\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 6.94\n");
                    printf("Special = None\n");
                    goto s;
                }
                char d[10] = "Be";
                if (strcmp(d, z) == 0)
                {
                    printf("Name = beryllium\n");
                    printf("Number = 4\n");
                    printf("Group = 2\n");
                    printf("Period = 2\n");
                    printf("Formula = Be\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 9.01\n");
                    printf("Special = None\n");
                    goto s;
                }
                char D[10] = "B";
                if (strcmp(D, z) == 0)
                {
                    printf("Name = boron\n");
                    printf("Number = 5\n");
                    printf("Group = 13\n");
                    printf("Period = 2\n");
                    printf("Formula = B\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 10.81\n");
                    printf("Special = None\n");
                    goto s;
                }
                char e[10] = "C";
                if (strcmp(e, z) == 0)
                {
                    printf("Name = carbon\n");
                    printf("Number = 6\n");
                    printf("Group = 14\n");
                    printf("Period = 2\n");
                    printf("Formula = C\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 12.01\n");
                    printf("Special = None\n");
                    goto s;
                }
                char E[10] = "N";
                if (strcmp(E, z) == 0)
                {
                    printf("Name = nitrogen\n");
                    printf("Number = 7\n");
                    printf("Group = 15\n");
                    printf("Period = 2\n");
                    printf("Formula = N\n");
                    printf("Charge = 3-\n");
                    printf("Mass = 14.01\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char f[10] = "O";
                if (strcmp(f, z) == 0)
                {
                    printf("Name = oxygen\n");
                    printf("Number = 8\n");
                    printf("Group = 16\n");
                    printf("Period = 2\n");
                    printf("Formula = O\n");
                    printf("Charge = 2-\n");
                    printf("Mass = 16.00\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char F[10] = "F";
                if (strcmp(F, z) == 0)
                {
                    printf("Name = fluorine\n");
                    printf("Number = 9\n");
                    printf("Group = 17\n");
                    printf("Period = 2\n");
                    printf("Formula = F\n");
                    printf("Charge = 1-\n");
                    printf("Mass = 19.00\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char g[10] = "Ne";
                if (strcmp(g, z) == 0)
                {
                    printf("Name = neon\n");
                    printf("Number = 10\n");
                    printf("Group = 18\n");
                    printf("Period = 2\n");
                    printf("Formula = Ne\n");
                    printf("Charge = 0\n");
                    printf("Mass = 20.18\n");
                    printf("Special = Noble Gas\n");
                    goto s;
                }
                char G[10] = "Na";
                if (strcmp(G, z) == 0)
                {
                    printf("Name = sodium\n");
                    printf("Number = 11\n");
                    printf("Group = 1\n");
                    printf("Period = 3\n");
                    printf("Formula = Na\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 22.99\n");
                    printf("Special = None\n");
                    goto s;
                }
                char h[10] = "Mg";
                if (strcmp(h, z) == 0)
                {
                    printf("Name = magnesium\n");
                    printf("Number = 12\n");
                    printf("Group = 2\n");
                    printf("Period = 3\n");
                    printf("Formula = Mg\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 24.31\n");
                    printf("Special = None\n");
                    goto s;
                }
                char H[10] = "Al";
                if (strcmp(H, z) == 0)
                {
                    printf("Name = aluminum\n");
                    printf("Number = 13\n");
                    printf("Group = 13\n");
                    printf("Period = 3\n");
                    printf("Formula = Al\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 26.98\n");
                    printf("Special = None\n");
                    goto s;
                }
                char i[10] = "Si";
                if (strcmp(i, z) == 0)
                {
                    printf("Name = silicon\n");
                    printf("Number = 14\n");
                    printf("Group = 14\n");
                    printf("Period = 3\n");
                    printf("Formula = Si\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 28.09\n");
                    printf("Special = None\n");
                    goto s;
                }
                char I[10] = "P";
                if (strcmp(I, z) == 0)
                {
                    printf("Name = phosphorus\n");
                    printf("Number = 15\n");
                    printf("Group = 15\n");
                    printf("Period = 3\n");
                    printf("Formula = P\n");
                    printf("Charge = 3-\n");
                    printf("Mass = 30.97\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char j[10] = "S";
                if (strcmp(j, z) == 0)
                {
                    printf("Name = sulfur\n");
                    printf("Number = 16\n");
                    printf("Group = 16\n");
                    printf("Period = 3\n");
                    printf("Formula = S\n");
                    printf("Charge = 2-\n");
                    printf("Mass = 32.06\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char J[10] = "Cl";
                if (strcmp(J, z) == 0)
                {
                    printf("Name = chlorine\n");
                    printf("Number = 17\n");
                    printf("Group = 17\n");
                    printf("Period = 3\n");
                    printf("Formula = Cl\n");
                    printf("Charge = 1-\n");
                    printf("Mass = 35.45\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char k[10] = "Ar";
                if (strcmp(k, z) == 0)
                {
                    printf("Name = argon\n");
                    printf("Number = 18\n");
                    printf("Group = 18\n");
                    printf("Period = 3\n");
                    printf("Formula = Ar\n");
                    printf("Charge = 0\n");
                    printf("Mass = 39.95\n");
                    printf("Special = Noble Gas\n");
                    goto s;
                }
                char K[10] = "K";
                if (strcmp(K, z) == 0)
                {
                    printf("Name = potassium\n");
                    printf("Number = 19\n");
                    printf("Group = 1\n");
                    printf("Period = 4\n");
                    printf("Formula = K\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 39.10\n");
                    printf("Special = None\n");
                    goto s;
                }
                char l[10] = "Ca";
                if (strcmp(l, z) == 0)
                {
                    printf("Name = calcium\n");
                    printf("Number = 20\n");
                    printf("Group = 2\n");
                    printf("Period = 4\n");
                    printf("Formula = Ca\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 40.08\n");
                    printf("Special = None\n");
                    goto s;
                }
                char L[10] = "Sc";
                if (strcmp(L, z) == 0)
                {
                    printf("Name = scandium\n");
                    printf("Number = 21\n");
                    printf("Group = 3\n");
                    printf("Period = 4\n");
                    printf("Formula = Sc\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 44.96\n");
                    printf("Special = None\n");
                    goto s;
                }
                char m[10] = "Ti";
                if (strcmp(m, z) == 0)
                {
                    printf("Name = titanium\n");
                    printf("Number = 22\n");
                    printf("Group = 4\n");
                    printf("Period = 4\n");
                    printf("Formula = Ti\n");
                    printf("Charge = 4+ \\ 3+\n");
                    printf("Mass = 47.88\n");
                    printf("Special = None\n");
                    goto s;
                }
                char M[10] = "V";
                if (strcmp(M, z) == 0)
                {
                    printf("Name = vanadium\n");
                    printf("Number = 23\n");
                    printf("Group = 5\n");
                    printf("Period = 4\n");
                    printf("Formula = V\n");
                    printf("Charge = 5+ \\ 4+\n");
                    printf("Mass = 50.94\n");
                    printf("Special = None\n");
                    goto s;
                }
                char n[10] = "Cr";
                if (strcmp(n, z) == 0)
                {
                    printf("Name = chromium\n");
                    printf("Number = 24\n");
                    printf("Group = 6\n");
                    printf("Period = 4\n");
                    printf("Formula = Cr\n");
                    printf("Charge = 3+ \\ 2+\n");
                    printf("Mass = 52.00\n");
                    printf("Special = None\n");
                    goto s;
                }
                char N[10] = "Mn";
                if (strcmp(N, z) == 0)
                {
                    printf("Name = manganese\n");
                    printf("Number = 25\n");
                    printf("Group = 7\n");
                    printf("Period = 4\n");
                    printf("Formula = Mn\n");
                    printf("Charge = 2+ \\ 4+\n");
                    printf("Mass = 54.94\n");
                    printf("Special = None\n");
                    goto s;
                }
                char o[10] = "Fe";
                if (strcmp(o, z) == 0)
                {
                    printf("Name = iron\n");
                    printf("Number = 26\n");
                    printf("Group = 8\n");
                    printf("Period = 4\n");
                    printf("Formula = Fe\n");
                    printf("Charge = 3+ \\ 2+\n");
                    printf("Mass = 55.85\n");
                    printf("Special = None\n");
                    goto s;
                }
                char O[10] = "Co";
                if (strcmp(O, z) == 0)
                {
                    printf("Name = cobalt\n");
                    printf("Number = 27\n");
                    printf("Group = 9\n");
                    printf("Period = 4\n");
                    printf("Formula = Co\n");
                    printf("Charge = 2+ \\ 3+\n");
                    printf("Mass = 58.93\n");
                    printf("Special = None\n");
                    goto s;
                }
                char p[10] = "Ni";
                if (strcmp(p, z) == 0)
                {
                    printf("Name = nickel\n");
                    printf("Number = 28\n");
                    printf("Group = 10\n");
                    printf("Period = 4\n");
                    printf("Formula = Ni\n");
                    printf("Charge = 2+ \\ 3+\n");
                    printf("Mass = 58.69\n");
                    printf("Special = None\n");
                    goto s;
                }
                char P[10] = "Cu";
                if (strcmp(P, z) == 0)
                {
                    printf("Name = copper\n");
                    printf("Number = 29\n");
                    printf("Group = 11\n");
                    printf("Period = 4\n");
                    printf("Formula = Cu\n");
                    printf("Charge = 2+ \\ 1+\n");
                    printf("Mass = 63.55\n");
                    printf("Special = None\n");
                    goto s;
                }
                char q[10] = "Zn";
                if (strcmp(q, z) == 0)
                {
                    printf("Name = zinc\n");
                    printf("Number = 30\n");
                    printf("Group = 12\n");
                    printf("Period = 4\n");
                    printf("Formula = Zn\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 65.38\n");
                    printf("Special = None\n");
                    goto s;
                }
                char Q[10] = "Ga";
                if (strcmp(Q, z) == 0)
                {
                    printf("Name = gallium\n");
                    printf("Number = 31\n");
                    printf("Group = 13\n");
                    printf("Period = 4\n");
                    printf("Formula = Ga\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 69.72\n");
                    printf("Special = None\n");
                    goto s;
                }
                char r[10] = "Ge";
                if (strcmp(r, z) == 0)
                {
                    printf("Name = germanium\n");
                    printf("Number = 32\n");
                    printf("Group = 14\n");
                    printf("Period = 4\n");
                    printf("Formula = Ge\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 72.61\n");
                    printf("Special = None\n");
                    goto s;
                }
                char R[10] = "As";
                if (strcmp(R, z) == 0)
                {
                    printf("Name = arsonic\n");
                    printf("Number = 33\n");
                    printf("Group = 15\n");
                    printf("Period = 4\n");
                    printf("Formula = As\n");
                    printf("Charge = 3-\n");
                    printf("Mass = 74.92\n");
                    printf("Special = None\n");
                    goto s;
                }
                char s[10] = "Se";
                if (strcmp(s, z) == 0)
                {
                    printf("Name = selenium\n");
                    printf("Number = 34\n");
                    printf("Group = 16\n");
                    printf("Period = 4\n");
                    printf("Formula = Se\n");
                    printf("Charge = 2-\n");
                    printf("Mass = 78.96\n");
                    printf("Special = None\n");
                    goto s;
                }
                char t[10] = "Br";
                if (strcmp(t, z) == 0)
                {
                    printf("Name = bromine\n");
                    printf("Number = 35\n");
                    printf("Group = 17\n");
                    printf("Period = 4\n");
                    printf("Formula = Br\n");
                    printf("Charge = 1-\n");
                    printf("Mass = 79.90\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char T[10] = "Kr";
                if (strcmp(T, z) == 0)
                {
                    printf("Name = krypton\n");
                    printf("Number = 36\n");
                    printf("Group = 18\n");
                    printf("Period = 4\n");
                    printf("Formula = Kr\n");
                    printf("Charge = 0\n");
                    printf("Mass = 83.80\n");
                    printf("Special = Noble Gas\n");
                    goto s;
                }
                char u[10] = "Rb";
                if (strcmp(u, z) == 0)
                {
                    printf("Name = rubidium\n");
                    printf("Number = 37\n");
                    printf("Group = 1\n");
                    printf("Period = 5\n");
                    printf("Formula = Rb\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 85.47\n");
                    printf("Special = None\n");
                    goto s;
                }
                char U[10] = "Sr";
                if (strcmp(U, z) == 0)
                {
                    printf("Name = stronthum\n");
                    printf("Number = 38\n");
                    printf("Group = 2\n");
                    printf("Period = 5\n");
                    printf("Formula = Sr\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 87.62\n");
                    printf("Special = None\n");
                    goto s;
                }
                char v[10] = "Y";
                if (strcmp(v, z) == 0)
                {
                    printf("Name = ythrium\n");
                    printf("Number = 39\n");
                    printf("Group = 3\n");
                    printf("Period = 5\n");
                    printf("Formula = Y\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 88.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char V[10] = "Zr";
                if (strcmp(V, z) == 0)
                {
                    printf("Name = zirconium\n");
                    printf("Number = 40\n");
                    printf("Group = 4\n");
                    printf("Period = 5\n");
                    printf("Formula = Zr\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 91.22\n");
                    printf("Special = None\n");
                    goto s;
                }
                char w[10] = "Nb";
                if (strcmp(w, z) == 0)
                {
                    printf("Name = niobium\n");
                    printf("Number = 41\n");
                    printf("Group = 5\n");
                    printf("Period = 5\n");
                    printf("Formula = Nb\n");
                    printf("Charge = 5+ \\ 3+\n");
                    printf("Mass = 92.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char W[10] = "Mo";
                if (strcmp(W, z) == 0)
                {
                    printf("Name = molybdenum\n");
                    printf("Number = 42\n");
                    printf("Group = 6\n");
                    printf("Period = 5\n");
                    printf("Formula = Mo\n");
                    printf("Charge = 6+\n");
                    printf("Mass = 95.94\n");
                    printf("Special = None\n");
                    goto s;
                }
                char x[10] = "Tc";
                if (strcmp(x, z) == 0)
                {
                    printf("Name = techenium\n");
                    printf("Number = 43\n");
                    printf("Group = 7\n");
                    printf("Period = 5\n");
                    printf("Charge = 7+\n");
                    printf("Mass = 98.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char X[10] = "Ru";
                if (strcmp(X, z) == 0)
                {
                    printf("Name = ruthenium\n");
                    printf("Number = 44\n");
                    printf("Group = 8\n");
                    printf("Period = 5\n");
                    printf("Formula = Ru\n");
                    printf("Charge = 3+ \\ 4+\n");
                    printf("Mass = 101.07\n");
                    printf("Special = None\n");
                    goto s;
                }
                char y[10] = "Rh";
                if (strcmp(y, z) == 0)
                {
                    printf("Name = rhodium\n");
                    printf("Number = 45\n");
                    printf("Group = 9\n");
                    printf("Period = 5\n");
                    printf("Formula = Rh\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 102.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char Y[10] = "Pd";
                if (strcmp(Y, z) == 0)
                {
                    printf("Name = palladium\n");
                    printf("Number = 46\n");
                    printf("Group = 10\n");
                    printf("Period = 5\n");
                    printf("Formula = Pd\n");
                    printf("Charge = 2+ \\ 4+\n");
                    printf("Mass = 106.42\n");
                    printf("Special = None\n");
                    goto s;
                }
                char z1[10] = "Ag";
                if (strcmp(z1, z) == 0)
                {
                    printf("Name = silver\n");
                    printf("Number = 47\n");
                    printf("Group = 11\n");
                    printf("Period = 5\n");
                    printf("Formula = Ag\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 107.87\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a1[10] = "Cd";
                if (strcmp(a1, z) == 0)
                {
                    printf("Name = cadmium\n");
                    printf("Number = 48\n");
                    printf("Group = 12\n");
                    printf("Period = 5\n");
                    printf("Formula = Cd\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 112.41\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a2[10] = "In";
                if (strcmp(a2, z) == 0)
                {
                    printf("Name = indium\n");
                    printf("Number = 49\n");
                    printf("Group = 13\n");
                    printf("Period = 5\n");
                    printf("Formula = In\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 114.82\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b10[10] = "Sn";
                if (strcmp(b10, z) == 0)
                {
                    printf("Name = tin\n");
                    printf("Number = 50\n");
                    printf("Group = 14\n");
                    printf("Period = 5\n");
                    printf("Formula = Sn\n");
                    printf("Charge = 4+ \\ 2+\n");
                    printf("Mass = 118.69\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b2[10] = "Sb";
                if (strcmp(b2, z) == 0)
                {
                    printf("Name = antimony\n");
                    printf("Number = 51\n");
                    printf("Group = 15\n");
                    printf("Period = 5\n");
                    printf("Formula = Sb\n");
                    printf("Charge = 3+ \\ 5+\n");
                    printf("Mass = 121.75\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a3[10] = "Te";
                if (strcmp(a3, z) == 0)
                {
                    printf("Name = tellurium\n");
                    printf("Number = 52\n");
                    printf("Group = 16\n");
                    printf("Period = 5\n");
                    printf("Formula = Te\n");
                    printf("Charge = 2-\n");
                    printf("Mass = 127.60\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a4[10] = "I";
                if (strcmp(a4, z) == 0)
                {
                    printf("Name = iodine\n");
                    printf("Number = 53\n");
                    printf("Group = 17\n");
                    printf("Period = 5\n");
                    printf("Formula = I\n");
                    printf("Charge = 1-\n");
                    printf("Mass = 126.90\n");
                    printf("Special = Diatomic\n");
                    goto s;
                }
                char a5[10] = "Xe";
                if (strcmp(a5, z) == 0)
                {
                    printf("Name = xenon\n");
                    printf("Number = 54\n");
                    printf("Group = 18\n");
                    printf("Period = 5\n");
                    printf("Formula = Xe\n");
                    printf("Charge = 0\n");
                    printf("Mass = 131.29\n");
                    printf("Special = Noble Gas\n");
                    printf("Name = cosiumn\n");
                    goto s;
                }
                char a6[10] = "Cs";
                if (strcmp(a6, z) == 0)
                {
                    printf("Name = cosiumn\n");
                    printf("Number = 55\n");
                    printf("Group = 1\n");
                    printf("Period = 6\n");
                    printf("Formula = Cs\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 132.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a7[10] = "Ba";
                if (strcmp(a7, z) == 0)
                {
                    printf("Name = barium\n");
                    printf("Number = 56\n");
                    printf("Group = 2\n");
                    printf("Period = 6\n");
                    printf("Formula = Ba\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 137.33\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a8[10] = "La";
                if (strcmp(a8, z) == 0)
                {
                    printf("Name = lanthanum\n");
                    printf("Number = 57\n");
                    printf("Group = 3\n");
                    printf("Period = 6\n");
                    printf("Formula = La\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 138.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char az8[10] = "Ce";
                if (strcmp(az8, z) == 0)
                {
                    printf("Name = cerium\n");
                    printf("Number = 58\n");
                    printf("Group = 5\n");
                    printf("Period = 6\n");
                    printf("Formula = Ce\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 140.12\n");
                    printf("Special = None\n");
                    goto s;
                }
                char a9[10] = "Pr";
                if (strcmp(a9, z) == 0)
                {
                    printf("Name = pruseodymium\n");
                    printf("Number = 59\n");
                    printf("Group = 6\n");
                    printf("Period = 6\n");
                    printf("Formula = Pr\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 140.91\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b5[10] = "Nd";
                if (strcmp(b5, z) == 0)
                {
                    printf("Name = neodymium\n");
                    printf("Number = 60\n");
                    printf("Group = 7\n");
                    printf("Period = 6\n");
                    printf("Formula = Nd\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 144.24\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b6[10] = "Pm";
                if (strcmp(b6, z) == 0)
                {
                    printf("Name = promethium\n");
                    printf("Number = 61\n");
                    printf("Group = 8\n");
                    printf("Period = 6\n");
                    printf("Formula = Pm\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 145\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b7[10] = "Sm";
                if (strcmp(b7, z) == 0)
                {
                    printf("Name = samarium\n");
                    printf("Number = 62\n");
                    printf("Group = 9\n");
                    printf("Period = 6\n");
                    printf("Formula = Sm\n");
                    printf("Charge = 3+ \\ 2+\n");
                    printf("Mass = 150.40\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b8[10] = "Eu";
                if (strcmp(b8, z) == 0)
                {
                    printf("Name = europium\n");
                    printf("Number = 63\n");
                    printf("Group = 10\n");
                    printf("Period = 6\n");
                    printf("Formula = Eu\n");
                    printf("Charge = 3+ \\ 2+\n");
                    printf("Mass = 151.97\n");
                    printf("Special = None\n");
                    goto s;
                }
                char b9[10] = "Gd";
                if (strcmp(b9, z) == 0)
                {
                    printf("Name = gadolinium\n");
                    printf("Number = 64\n");
                    printf("Group = 11\n");
                    printf("Period = 6\n");
                    printf("Formula = Gd\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 157.25\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c3[10] = "Tb";
                if (strcmp(c3, z) == 0)
                {
                    printf("Name = terbium\n");
                    printf("Number = 65\n");
                    printf("Group = 12\n");
                    printf("Period = 6\n");
                    printf("Formula = Tb\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 158.93\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c4[10] = "Dy";
                if (strcmp(c4, z) == 0)
                {
                    printf("Name = dysprosium\n");
                    printf("Number = 66\n");
                    printf("Group = 13\n");
                    printf("Period = 6\n");
                    printf("Formula = Dy\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 162.50\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c5[10] = "Ho";
                if (strcmp(c5, z) == 0)
                {
                    printf("Name = helmium\n");
                    printf("Number = 67\n");
                    printf("Group = 14\n");
                    printf("Period = 6\n");
                    printf("Formula = Ho\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 164.93\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c6[10] = "Er";
                if (strcmp(c6, z) == 0)
                {
                    printf("Name = erbium\n");
                    printf("Number = 68\n");
                    printf("Group = 15\n");
                    printf("Period = 6\n");
                    printf("Formula = Er\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 167.26\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c7[10] = "Tm";
                if (strcmp(c7, z) == 0)
                {
                    printf("Name = thulium\n");
                    printf("Number = 69\n");
                    printf("Group = 16\n");
                    printf("Period = 6\n");
                    printf("Formula = Tm\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 168.94\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c8[10] = "Yb";
                if (strcmp(c8, z) == 0)
                {
                    printf("Name = ytlerhium\n");
                    printf("Number = 70\n");
                    printf("Group = 17\n");
                    printf("Period = 6\n");
                    printf("Formula = Yb\n");
                    printf("Charge = 3+ \\ 2+\n");
                    printf("Mass = 173.04\n");
                    printf("Special = None\n");
                    goto s;
                }
                char c9[10] = "Lu";
                if (strcmp(c9, z) == 0)
                {
                    printf("Name = lutelium\n");
                    printf("Number = 71\n");
                    printf("Group = 18\n");
                    printf("Period = 6\n");
                    printf("Formula = Lu\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 174.97\n");
                    printf("Special = None\n");
                    goto s;
                }
                char d2[10] = "Hf";
                if (strcmp(d2, z) == 0)
                {
                    printf("Name = hefnium\n");
                    printf("Number = 72\n");
                    printf("Group = 4\n");
                    printf("Period = 6\n");
                    printf("Formula = Hf\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 178.49\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qw[10] = "Ta";
                if (strcmp(qw, z) == 0)
                {
                    printf("Name = tantalum\n");
                    printf("Number = 73\n");
                    printf("Group = 5\n");
                    printf("Period = 6\n");
                    printf("Formula = Ta\n");
                    printf("Charge = 5+\n");
                    printf("Mass = 180.95\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qe[10] = "W";
                if (strcmp(qe, z) == 0)
                {
                    printf("Name = wolfrum (tungsten)\n");
                    printf("Number = 74\n");
                    printf("Group = 6\n");
                    printf("Period = 6\n");
                    printf("Formula = W\n");
                    printf("Charge = 6+\n");
                    printf("Mass = 183.85\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qr[10] = "Re";
                if (strcmp(qr, z) == 0)
                {
                    printf("Name = rhenium\n");
                    printf("Number = 75\n");
                    printf("Group = 7\n");
                    printf("Period = 6\n");
                    printf("Formula = Re\n");
                    printf("Charge = 7+\n");
                    printf("Mass = 186.21\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qt[10] = "Os";
                if (strcmp(qt, z) == 0)
                {
                    printf("Name = osmium\n");
                    printf("Number = 76\n");
                    printf("Group = 8\n");
                    printf("Period = 6\n");
                    printf("Formula = Os\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 190.2\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qy[10] = "Ir";
                if (strcmp(qy, z) == 0)
                {
                    printf("Name = iridium\n");
                    printf("Number = 77\n");
                    printf("Group = 9\n");
                    printf("Period = 6\n");
                    printf("Formula = Ir\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 192.22\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qu[10] = "Pt";
                if (strcmp(qu, z) == 0)
                {
                    printf("Name = platinum\n");
                    printf("Number = 78\n");
                    printf("Group = 10\n");
                    printf("Period = 6\n");
                    printf("Formula = Pt\n");
                    printf("Charge = 4+ \\ 2+\n");
                    printf("Mass = 195.08\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qi[10] = "Au";
                if (strcmp(qi, z) == 0)
                {
                    printf("Name = gold\n");
                    printf("Number = 79\n");
                    printf("Group = 11\n");
                    printf("Period = 6\n");
                    printf("Formula = Au\n");
                    printf("Charge = 3+ \\ 1+\n");
                    printf("Mass = 196.97\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qo[10] = "Hg";
                if (strcmp(qo, z) == 0)
                {
                    printf("Name = mercury\n");
                    printf("Number = 80\n");
                    printf("Group = 12\n");
                    printf("Period = 6\n");
                    printf("Formula = Hg\n");
                    printf("Charge = 2+ \\ 1+\n");
                    printf("Mass = 200.59\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qp[10] = "Tl";
                if (strcmp(qp, z) == 0)
                {
                    printf("Name = thallium\n");
                    printf("Number = 81\n");
                    printf("Group = 13\n");
                    printf("Period = 6\n");
                    printf("Formula = Tl\n");
                    printf("Charge = 1+ \\ 3+\n");
                    printf("Mass = 204.38\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qa[10] = "Pb";
                if (strcmp(qa, z) == 0)
                {
                    printf("Name = lead\n");
                    printf("Number = 82\n");
                    printf("Group = 14\n");
                    printf("Period = 6\n");
                    printf("Formula = Pb\n");
                    printf("Charge = 2+ \\ 4+\n");
                    printf("Mass = 207.20\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qs[10] = "Bi";
                if (strcmp(qs, z) == 0)
                {
                    printf("Name = bismuth\n");
                    printf("Number = 83\n");
                    printf("Group = 15\n");
                    printf("Period = 6\n");
                    printf("Formula = Bi\n");
                    printf("Charge = 3+ \\ 5+\n");
                    printf("Mass = 208.98\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qd[10] = "Po";
                if (strcmp(qd, z) == 0)
                {
                    printf("Name = polonium\n");
                    printf("Number = 84\n");
                    printf("Group = 16\n");
                    printf("Period = 6\n");
                    printf("Formula = Po\n");
                    printf("Charge = 2+ \\ 4+\n");
                    printf("Mass = 209\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qf[10] = "At";
                if (strcmp(qf, z) == 0)
                {
                    printf("Name = asiatine\n");
                    printf("Number = 85\n");
                    printf("Group = 17\n");
                    printf("Period = 6\n");
                    printf("Formula = At\n");
                    printf("Charge = 1-\n");
                    printf("Mass = 210\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qg[10] = "Rn";
                if (strcmp(qg, z) == 0)
                {
                    printf("Name = radon\n");
                    printf("Number = 86\n");
                    printf("Group = 18\n");
                    printf("Period = 6\n");
                    printf("Formula = Rn\n");
                    printf("Charge = 0\n");
                    printf("Mass = 222\n");
                    printf("Special = Noble Gas\n");
                    goto s;
                }
                char qh[10] = "Fr";
                if (strcmp(qh, z) == 0)
                {
                    printf("Name = fruncium\n");
                    printf("Number = 87\n");
                    printf("Group = 1\n");
                    printf("Period = 7\n");
                    printf("Formula = Fr\n");
                    printf("Charge = 1+\n");
                    printf("Mass = 223\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qj[10] = "Ra";
                if (strcmp(qj, z) == 0)
                {
                    printf("Name = radium\n");
                    printf("Number = 88\n");
                    printf("Group = 2\n");
                    printf("Period = 7\n");
                    printf("Formula = Ra\n");
                    printf("Charge = 2+\n");
                    printf("Mass = 226.03\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qk[10] = "Ac";
                if (strcmp(qk, z) == 0)
                {
                    printf("Name = actinium\n");
                    printf("Number = 89\n");
                    printf("Group = 3\n");
                    printf("Period = 7\n");
                    printf("Formula = Ac\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 227.03\n");
                    printf("Special = None\n");
                    goto s;
                }
                char ql[10] = "Th";
                if (strcmp(ql, z) == 0)
                {
                    printf("Name = thorlum\n");
                    printf("Number = 90\n");
                    printf("Group = 5\n");
                    printf("Period = 7\n");
                    printf("Formula = Th\n");
                    printf("Charge = 4+\n");
                    printf("Mass = 232.04\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qz[10] = "Pa";
                if (strcmp(qz, z) == 0)
                {
                    printf("Name = protactinium\n");
                    printf("Number = 91\n");
                    printf("Group = 6\n");
                    printf("Period = 7\n");
                    printf("Formula = Pa\n");
                    printf("Charge = 5+ \\ 4+\n");
                    printf("Mass = 231.04\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qx[10] = "U";
                if (strcmp(qx, z) == 0)
                {
                    printf("Name = uranium\n");
                    printf("Number = 92\n");
                    printf("Group = 7\n");
                    printf("Period = 7\n");
                    printf("Formula = U\n");
                    printf("Charge = 6+ \\ 4+\n");
                    printf("Mass = 238.03\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qc[10] = "Np";
                if (strcmp(qc, z) == 0)
                {
                    printf("Name = neplunium\n");
                    printf("Number = 93\n");
                    printf("Group = 8\n");
                    printf("Period = 7\n");
                    printf("Formula = Np\n");
                    printf("Charge = 5+\n");
                    printf("Mass = 237.05\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qv[10] = "Pu";
                if (strcmp(qv, z) == 0)
                {
                    printf("Name = plutonium\n");
                    printf("Number = 94\n");
                    printf("Group = 9\n");
                    printf("Period = 7\n");
                    printf("Formula = Pu\n");
                    printf("Charge = 4+ \\ 6+\n");
                    printf("Mass = 244\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qb[10] = "Am";
                if (strcmp(qb, z) == 0)
                {
                    printf("Name = americium\n");
                    printf("Number = 95\n");
                    printf("Group = 10\n");
                    printf("Period = 7\n");
                    printf("Formula = Am\n");
                    printf("Charge = 3+ \\ 4+\n");
                    printf("Mass = 244\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qn[10] = "Cm";
                if (strcmp(qn, z) == 0)
                {
                    printf("Name = curium\n");
                    printf("Number = 96\n");
                    printf("Group = 11\n");
                    printf("Period = 7\n");
                    printf("Formula = Cm\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 247\n");
                    printf("Special = None\n");
                    goto s;
                }
                char qm[10] = "BK";
                if (strcmp(qm, z) == 0)
                {
                    printf("Name = borkelium\n");
                    printf("Number = 97\n");
                    printf("Group = 12\n");
                    printf("Period = 7\n");
                    printf("Formula = Bk\n");
                    printf("Charge = 3+ \\ 4+\n");
                    printf("Mass = 247\n");
                    printf("Special = None\n");
                    goto s;
                }
                char wq[10] = "Cf";
                if (strcmp(wq, z) == 0)
                {
                    printf("Name = californium\n");
                    printf("Number = 98\n");
                    printf("Group = 13\n");
                    printf("Period = 7\n");
                    printf("Formula = Cf\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 251\n");
                    printf("Special = None\n");
                    goto s;
                }
                char we[10] = "Es";
                if (strcmp(we, z) == 0)
                {
                    printf("Name = einsteinium\n");
                    printf("Number = 99\n");
                    printf("Group = 14\n");
                    printf("Period = 7\n");
                    printf("Formula = Es\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 252\n");
                    printf("Special = None\n");
                    goto s;
                }
                char wr[10] = "Fm";
                if (strcmp(wr, z) == 0)
                {
                    printf("Name = formium\n");
                    printf("Number = 100\n");
                    printf("Group = 15\n");
                    printf("Period = 7\n");
                    printf("Formula = Fm\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 257\n");
                    printf("Special = None\n");
                    goto s;
                }
                char wt[10] = "Md";
                if (strcmp(wt, z) == 0)
                {
                    printf("Name = mendelevium\n");
                    printf("Number = 101\n");
                    printf("Group = 16\n");
                    printf("Period = 7\n");
                    printf("Formula = Md\n");
                    printf("Charge = 2+ \\ 3+\n");
                    printf("Mass = 258\n");
                    printf("Special = None\n");
                    goto s;
                }
                char wy[10] = "No";
                if (strcmp(wy, z) == 0)
                {
                    printf("Name = nebelium\n");
                    printf("Number = 102\n");
                    printf("Group = 17\n");
                    printf("Period = 7\n");
                    printf("Formula = No\n");
                    printf("Charge = 2+ \\ 3+\n");
                    printf("Mass = 259\n");
                    printf("Special = None\n\n");
                    goto s;
                }
                char wi[10] = "Lr";
                if (strcmp(wi, z) == 0)
                {
                    printf("Name = lawrencium\n");
                    printf("Number = 103\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Lr\n");
                    printf("Charge = 3+\n");
                    printf("Mass = 260\n");
                    printf("Special = None\n");
                    goto s;
                }
                char wj[10] = "Rf";
                if (strcmp(wj, z) == 0)
                {
                    printf("Name = Rutherfordium\n");
                    printf("Number = 104\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Rf\n");
                    printf("Charge = 2\n");
                    printf("Mass = 261\n");
                    printf("Special = Solid\n");
                    goto s;
                }
                char wk[10] = "Db";
                if (strcmp(wk, z) == 0)
                {
                    printf("Name = Dubnium\n");
                    printf("Number = 105\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Db\n");
                    printf("Charge = 2\n");
                    printf("Mass = \n");
                    printf("Special = Solid\n");
                    goto s;
                }
                char wl[10] = "Sg";
                if (strcmp(wl, z) == 0)
                {
                    printf("Name = Seaborgium\n");
                    printf("Number = 106\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Sg\n");
                    printf("Charge = 2\n");
                    printf("Mass = \n");
                    printf("Special = Solid\n");
                    goto s;
                }
                char wz[10] = "Bh";
                if (strcmp(wz, z) == 0)
                {
                    printf("Name = Bohrium\n");
                    printf("Number = 107\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Bh\n");
                    printf("Charge = 2\n");
                    printf("Mass = 264\n");
                    printf("Special = Solid\n");
                    goto s;
                }
                char wx[10] = "Hs";
                if (strcmp(wx, z) == 0)
                {
                    printf("Name = Hassium\n");
                    printf("Number = 108\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Hs\n");
                    printf("Charge = 2\n");
                    printf("Mass = \n");
                    printf("Special = solid\n");
                    goto s;
                }
                char wc[10] = "Mt";
                if (strcmp(wc, z) == 0)
                {
                    printf("Name = Meitnerium\n");
                    printf("Number = 109\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Mt\n");
                    printf("Charge = 2\n");
                    printf("Mass = \n");
                    printf("Special = solid\n");
                    goto s;
                }
                char wv[10] = "Ds";
                if (strcmp(wv, z) == 0)
                {
                    printf("Name = Darmstadtium\n");
                    printf("Number = 110\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Ds\n");
                    printf("Charge = 1\n");
                    printf("Mass = 281\n");
                    printf("Special = solid\n");
                    goto s;
                }
                char wb[10] = "Rg";
                if (strcmp(wb, z) == 0)
                {
                    printf("Name = Roentgenium\n");
                    printf("Number = 111\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Rg\n");
                    printf("Charge = 2\n");
                    printf("Mass = 282\n");
                    printf("Special = solid\n");
                    goto s;
                }
                char wn[10] = "og";
                if (strcmp(wn, z) == 0)
                {
                    printf("Name = Oganesson\n");
                    printf("Number = 118\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Og\n");
                    printf("Charge = 8\n");
                    printf("Mass =  294\n");
                    printf("Special = noble gas\n");
                    goto s;
                }
                char wm[10] = "Ts";
                if (strcmp(wm, z) == 0)
                {
                    printf("Name = Tennessine\n");
                    printf("Number = 117\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Ts\n");
                    printf("Charge = -1\n");
                    printf("Mass = 294.21\n");
                    printf("Special = none\n");
                    goto s;
                }
                char eq[10] = "Lv";
                if (strcmp(eq, z) == 0)
                {
                    printf("Name = Livermorium\n");
                    printf("Number = 116\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Lv\n");
                    printf("Charge = -2\n");
                    printf("Mass = 293\n");
                    printf("Special = none\n");
                    goto s;
                }
                char ew[10] = "Mc";
                if (strcmp(ew, z) == 0)
                {
                    printf("Name = Moscovium\n");
                    printf("Number = 115\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Mc\n");
                    printf("Charge = -3\n");
                    printf("Mass = 289\n");
                    printf("Special = none\n");
                    goto s;
                }
                char eew[10] = "Fl";
                if (strcmp(eew, z) == 0)
                {
                    printf("Name = Moscovium\n");
                    printf("Number = 115\n");
                    printf("Group = 18\n");
                    printf("Period = 7\n");
                    printf("Formula = Mc\n");
                    printf("Charge = -3\n");
                    printf("Mass = 289\n");
                    printf("Special = none\n");
                    goto s;
                }
                else
                {
                    printf("Invalid");
                }
            }
            else
            {
                printf("Ok byee");
                exit(0);
            }
        }
    }
    else
    {
        printf("wrong ID or pasword\n");
        printf("\n");
        goto sk;
    }
}
