#include <iostream>

struct NodoLista {
    int dato;
    NodoLista* next;

    NodoLista(int val) : dato(val), next(NULL) {}
};

void imprimirLista(NodoLista* c) {
    NodoLista* actual = c;
    if (actual == NULL) {
        std::cout << "LA LISTA ESTA VACIA ." << std::endl;
        return;
    }
    do {
        std::cout << actual->dato << " , ";
        actual = actual->next;
    } while (actual != c); 
    std::cout << std::endl;
}

void insertarDato(NodoLista*& c, int nuevoDato) {
    NodoLista* nuevoNodo = new NodoLista(nuevoDato);
    if (c == NULL) {
        nuevoNodo->next = nuevoNodo; 
    } else {
        nuevoNodo->next = c->next; 
        c->next = nuevoNodo; 
    }
    c = nuevoNodo; 
}

void actualizarDato(NodoLista* c, int datoAnterior, int nuevoDato) {
    NodoLista* actual = c;
    do {
        if (actual->dato == datoAnterior) {
            actual->dato = nuevoDato;
            return;
        }
        actual = actual->next;
    } while (actual != c); 
    std::cout << "EL DATO NO SE ENCUENTRA EN LA LISTA." << std::endl;
}

void eliminarDato(NodoLista*& c, int datoAEliminar) {
    NodoLista* actual = c;
    NodoLista* previo = NULL;

    do {
        if (actual->dato == datoAEliminar) {
            if (actual == c) {
                c = actual->next; 
            }
            if (previo != NULL) {
                previo->next = actual->next; 
            }
            delete actual;
            return;
        }
        previo = actual;
        actual = actual->next;
    } while (actual != c); 
    std::cout << "EL DATO NO SE ENCUENTRA EN LA LISTA." << std::endl;
}

int main() {
    NodoLista* c = NULL;

    for (int i = 1; i <= 10; ++i) {
        insertarDato(c, i);
    }

    imprimirLista(c);

    int opcion;
    do {
        std::cout << "Opciones:" << std::endl;
        std::cout << "1. INSERTAR DATO" << std::endl;
        std::cout << "2. MOSTRAR LISTA" << std::endl;
        std::cout << "3. ACTUALIZAR DATO" << std::endl;
        std::cout << "4. ELIMINAR DATO" << std::endl;
        std::cout << "0. SALIR" << std::endl;
        std::cout << "INGRESE UNA OPCION: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                int nuevoDato; 
                std::cout << "Ingrese el nuevo dato: ";
                std::cin >> nuevoDato;
                insertarDato(c, nuevoDato);
                break;
            case 2:
                imprimirLista(c);
                break;
            case 3:
                int datoAnterior;
                std::cout << "INGRESE EL DATO A ACTUALIZAR: ";
                std::cin >> datoAnterior;
                std::cout << "INGRESE EL NUEVO VALOR: ";
                std::cin >> nuevoDato;
                actualizarDato(c, datoAnterior, nuevoDato);
                break;
            case 4:
                int datoAEliminar;
                std::cout << "INGRESE EL DATO A ELIMINAR: ";
                std::cin >> datoAEliminar;
                eliminarDato(c, datoAEliminar);
                break;
            case 0:
                break;
            default:
                std::cout << "OPCION NO VALIDA. INTENTE NUEVAMENTE." << std::endl;
        }
    } while (opcion != 0);

    

    return 0;
}














































































