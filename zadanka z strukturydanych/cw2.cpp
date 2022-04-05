#include <iostream>
using namespace std;

typedef int Item;
struct node
{
	Item  info;
	node *next;
};
typedef node *link;
link lista;



void create(link &lista)
{
    lista = new node;
    lista->next = NULL;
}
//wstawienie x za elementem wskazywanym przez p
void wstaw(link p, Item x)
{
    link temp = new node;
    temp->info = x;
    temp->next = p->next;
    p->next = temp;
}
//wypisuje liste zaczynaj¹c od elementu wskazywanego przez glowe
void wypisz(link lista)
{
    cout << "\nLista: \n";
    link p = lista->next; // p ustawiamy na pierwszy element
    while (p!=NULL)
    {
        cout << p->info << " ";
        p = p->next; // przejscie do nastepnego elementu/wezla
    }
    cout << endl;
}

//sprawdza czy x jest na liscie (funkcja iteracyjna)
bool jest_iter(link lista, Item x)
{
    link p = lista->next;
    while(p!=NULL)
    {
        if(p->info == x)
        {
            return true;
        }
        p = p->next;
    }
    return false;
}
//usuwa element za elementem wskazywanym przez p
void usun(link p)
{
    if(p->next!=NULL)
    {
        link temp;
        temp = p->next;
        p->next = temp->next;
        delete temp;
    }
    else
    {
        cout << "Element do usuniecia nie istnieje.\n";
    }
}
void makenull(link p)
{
    while (p->next!=NULL)
    {
        usun(p);
    }
}

void wstaw_na_koniec(link lista, Item x)
{
    link p = lista;
    while (p->next !=NULL)
    {
        p=p->next;
    }
    wstaw(p,x);
}
//usuwa z konca
void usun_ostatni(linnk lista)
{

}
//wstawianie na stos
void push(link stos, Item x)
{
    wstaw(stos, x);
}
//usuwanie ze stosu
void pop(link stos)
{
    usun(stos);
}
bool is_empty(link stos)
{
    return(stos->next==NULL);
}
//zwraca elementy z wierzcholka
Item peek(link stos)
{
    if(!is_empty(stos))
        return stos->next->info;
}

void dec2bin(Item n)
{
    link stos;
    create(stos);
    while(n>0)
    {
        push(stos, n%2);
        n/=2;
    }
    while(!is_empty(stos))
    {
        cout<<peek(stos);
        pop(stos);
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    dec2bin(n);
}
