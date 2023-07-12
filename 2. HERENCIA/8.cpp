/*
8.	Una mec�nica automotriz comercializa los siguientes productos:
�	Repuestos: precio de venta calculado con un porcentaje de utilidad sobre el precio de costo
�	Mano de obra: valor unitario por hora de trabajo
�	Mantenimiento: repuestos y mano de obra. Se aplica un porcentaje de descuento en repuestos
�	Servicio a domicilio: repuestos y mano de obra. Se aplica porcentaje de recargo en mano de obra.
*/

#include<iostream>
using namespace std;

class MecanicaAutomotriz{
    protected:
        // Precio de f�brica << COSTO >>
        double direc = 32;
        double bat = 80;
        double bujias = 16;
        double amorti = 80;
        double llantas = 64;
        double enbrag = 108;
        double cata = 112;
        double f_piloto = 28;
        double disco_fren = 80;
        double foco_delan = 40;
};

class Comerciante : public MecanicaAutomotriz{ 
public:
void productos_comprados(double sub3_t_cpm){

        double costo1, costo2 ,costo3,costo4,costo5, costo6,costo7, costo8, costo9, costo10;
        double porcentaje = 0.2 ;
        /* El procentaje es del 20% y lo saco a decimales para facilitarme la operaci�n 
        haciendo la operaci�n 20 / 100 = 0.2
        */
        
        double cont_pro1,cont_pro2,cont_pro3,cont_pro4,cont_pro5,cont_pro6,cont_pro7,cont_pro8,cont_pro9,cont_pro10, c_pro,d_pro, aco1,aco2,aco3,aco4,aco5,aco6,aco7,aco8,aco9,aco10;
        int cont_do = 0;
        double sub_t_cpm,sub2_t_cpm;
        int  op_c_pro;
            /*  Repuestos y porcentaje de respuestos unidos */
            do{
                cout << "Ingrese las opciones de los productos o el producto que desea comprar: " << endl;
                cout << "1. Direccionales $ 40 " <<endl;  
                cout << "2. Bateria $ 100 " <<endl; 
                cout << "3. Bujia $ 20 " <<endl; 
                cout << "4. Amortiguador $ 100 " <<endl; 
                cout << "5. Llantas $ 80 " <<endl; 
                cout << "6. Enbrague $ 135 " <<endl; 
                cout << "7. Catalizador $ 140 " <<endl; 
                cout << "8. Focos piloto de la parte trasera $ 35 " <<endl; 
                cout << "9. Disco de freno $ 100" <<endl; 
                cout << "10. Focos del lanteros $ 50 " <<endl; 
                cin>> op_c_pro;
                switch (op_c_pro)
                {
                    case 1: 
                        costo1 = (1-porcentaje) * 40; /* Preccio de costo */
                        direc = costo1 / (1-porcentaje); /* Precio de venta */
                        aco1 = aco1 + direc;
                        cont_pro1 = cont_pro1 + 1;
                    break;
                    case 2: 
                        costo2 = (1-porcentaje) * 100;
                        bat =  costo2 / (1-porcentaje);
                        aco2 = aco2 + bat;
                        cont_pro1 = cont_pro1 + 1;
                    break;
                    case 3:
                        costo3 = (1-porcentaje) * 20;
                        bujias = costo3 / (1-porcentaje);
                        aco3= aco3 + bujias;
                        cont_pro3 = cont_pro3 + 1; 
                    break;
                    case 4: 
                        costo4= (1-porcentaje) * 100;
                        bujias = costo4 / (1-porcentaje);
                        amorti = aco4 + amorti;
                        cont_pro4 = cont_pro4 + 1;
                    break;
                    case 5: 
                        costo5 = (1-porcentaje) * 80;
                        llantas = costo5 / (1-porcentaje);
                        aco5 = aco5 + llantas;
                        cont_pro5 = cont_pro5 + 1;
                    break;

                    case 6: 
                        costo6 = (1-porcentaje) * 135;
                        enbrag = costo6 / (1-porcentaje);
                        aco6 = aco6 + enbrag;
                        cont_pro6 = cont_pro6 + 1;
                    break;

                    case 7: 
                        costo7 = (1-porcentaje) * 140;
                        enbrag = costo7 / (1-porcentaje);
                        aco7 = aco7 + cata;
                        cont_pro7 = cont_pro7 + 1;
                    break;

                    case 8: 
                        costo8 = (1-porcentaje) * 35;
                        enbrag = costo8 / (1-porcentaje);
                        aco8 = aco8 + f_piloto;
                        cont_pro9 = cont_pro9 + 1;
                    break;

                    case 9: 
                        costo9 = (1-porcentaje) * 100;
                        enbrag = costo9 / (1-porcentaje);
                        aco9 = aco9 + disco_fren;
                        cont_pro9 = cont_pro9 + 1;
                    break;

                    case 10: 
                        costo10 = (1-porcentaje) * 50;
                        enbrag = costo10/(1-porcentaje);
                        aco10 = aco10 + foco_delan;
                        cont_pro10 = cont_pro10 + 1;
                    break;
                        cont_do = cont_do + 1;
                         sub_t_cpm = aco1 + aco2 + aco3 + aco4 + aco5 + aco6 + aco7 + aco8 + aco9 + aco10;
                         // descuento por comprar piezas 
                            if (cont_do > 2 && cont_do <= 3)
                            {
                                sub2_t_cpm = sub_t_cpm * (5)/(100);  // Le quitan de los $ 40 3.2
                                sub3_t_cpm = sub_t_cpm - sub2_t_cpm;
                            }
                            else 
                            sub2_t_cpm = sub_t_cpm * (8)/(100);                        
                            sub3_t_cpm = sub_t_cpm - sub2_t_cpm;
                         
                    default:
                        cout<<"La opcion que ingreso no esta en los limites estabelcidos de los productos que est�n disponibles "<<endl;
                       
                    break;
                }
            cout<<"Desea seguir ingresando algun otro producto si= 1 / no = 0: "<<endl;
            cin>>d_pro;
            }
            while(d_pro != 0);
    }
};

void valor_unitario_h_tra(double sub3_t_cpm, double suma_th_precio);
void valor_recargo(double suma_th_precio, int op);

int main(){
    
    int op;
    double sub3_t_cpm = 0,suma_th_precio=0;
    cout <<" \t Bienvenidos a Mecanic� Atomotriz\t  "<<endl;
    cout <<"Ingrese el tipo de servicio a domicilio o servicio en el taller: "<< endl;
    cout <<"1. Taller "<<endl;
    cout <<"2. Domicilio "<<endl;
    cin >> op;
    Comerciante cliente1;
    cliente1.productos_comprados(sub3_t_cpm);
    cout<<endl;
    valor_unitario_h_tra(sub3_t_cpm, suma_th_precio);
    valor_recargo( suma_th_precio,  op);

    return 0;
}

void valor_unitario_h_tra(double sub3_t_cpm, double suma_th_precio){
    int h_tra;
    double acomulador;
    cout<<"cuantas horas de trabajo se demoro el mecanico para intalarle tos las piezas que compro de su auto: "<<endl;
    cin>>h_tra;
    for (int i=0;i<h_tra; i++){
        acomulador = acomulador + 5;
    } 
    suma_th_precio = sub3_t_cpm * acomulador;
}

void valor_recargo(double suma_th_precio, int op){
double t = 0, sub = 0;
if (op == 1){
    cout << "El valor que debe pagar es: " << suma_th_precio << endl;
}
else
    sub = (suma_th_precio * 5)/100;
    t= suma_th_precio - sub;
    cout << "El total a pagar con el precio de recargo es: "<<endl;
}
