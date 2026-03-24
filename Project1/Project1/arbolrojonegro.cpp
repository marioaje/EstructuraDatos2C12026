//#include <iostream>
//
//using namespace std;
//
//enum Color
//{
//	RED,
//	BLACK
//};
//
//struct NodosRojoNegros
//{
//	int dato;
//	Color color;
//	NodosRojoNegros *left, *right, *parent;
//
//	NodosRojoNegros(int dato)
//	{
//		this->dato = dato;
//		left = right = parent = nullptr;
//		color = RED; // Nuevo nodo siempre se inserta como rojo
//	}
//};
//
//class RBTree
//{
//private:
//	NodosRojoNegros* root;
//
//	void rotarIzquierda(NodosRojoNegros*& puntero)
//	{
//		NodosRojoNegros* pt_right = puntero->right;
//		pt_right = puntero->right->left;
//
//		if (puntero->right != nullptr)
//		{
//			puntero->right->parent = puntero;
//		}
//
//		pt_right->parent = puntero->parent;
//
//		// Validaciones del puntero padre
//		if (puntero->parent == nullptr)
//		{
//			root = pt_right;
//		}
//
//		else if (puntero == puntero->parent->left)
//		{
//			puntero->parent->left = pt_right;
//		}
//		else
//		{
//			puntero->parent->right = pt_right;
//		}
//
//		pt_right->left = puntero;
//		puntero->parent = pt_right;
//	}
//
//
//	void rotarDerecha(NodosRojoNegros*& puntero)
//	{
//		NodosRojoNegros* pt_left = puntero->left;
//		pt_left = puntero->left->right;
//
//		if (puntero->left != nullptr)
//		{
//			puntero->left->parent = puntero;
//		}
//
//		pt_left->parent = puntero->parent;
//
//		// Validaciones del puntero padre
//		if (puntero->parent == nullptr)
//		{
//			root = pt_left;
//		}
//
//		else if (puntero == puntero->parent->left)
//		{
//			puntero->parent->right = pt_left;
//		}
//		else
//		{
//			puntero->parent->right = pt_left;
//		}
//
//		pt_left->right = puntero;
//		puntero->parent = pt_left;
//	}
//
//	void insertar(NodosRojoNegros*& puntero) {
//		NodosRojoNegros* parent_pt = nullptr;
//		NodosRojoNegros* grand_parent_pt = nullptr;
//
//
//		while ((puntero != root) && (puntero->color != BLACK)
//			&& (puntero->color == RED)
//			) 
//		{
//			//verifican si es rojo
//			//left
//			//rigth
//
//			//else Negro
//		}
//
//
//
//	}
//
//
//};
