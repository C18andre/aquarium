#include "Aquarium.h"
#include "Milieu.h"
#include "Creature.h"
#include "Accessories.h"
#include <iostream>

using namespace std;


int main()
{

   Shell a = Shell(1.0,1.0);
   cout << "Le boefsse" << a.speedCoef() <<endl;


   
   Aquarium       ecosysteme( 640, 480, 30 );

   for ( int i = 1; i <= 20; ++i )
      ecosysteme.getMilieu().addMember( Creature() );

   ecosysteme.run();
   

   return 0;

}
