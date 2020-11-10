
#include "Car.h"

#include "NewAerodynamics.h"
#include "NewElectronics.h"
#include "NewEngine.h"
#include "NewChassis.h"

#include "CurrentAerodynamics.h"
#include "CurrentElectronics.h"
#include "CurrentEngine.h"
#include "CurrentChassis.h"

#include "AerodynamicsFactory.h"
#include "ElectronicsFactory.h"
#include "EngineFactory.h"
#include "ChassisFactory.h"

#include "WindTunnel.h"
#include "Iterator.h"
#include "Test.h"

#include "EU.h"
#include "International.h"
#include "Continent.h"
#include "Contents.h"
#include "compositeContainer.h"
#include "Truck.h"
#include "Crate.h"

#include "FridayMorningPractice.h" 
#include "FridayAfternoonPractice.h" 
#include "SaturdayPractice.h" 
#include "PracticeState.h" 
#include "RaceTrack.h" 
#include "Qualifier.h" 
#include "Memento.h" 
#include "TimeKeeper.h" 
#include "RaceHandler.h" 
#include "Racing.h" 
#include "Positioning.h" 
#include "PointAssigning.h" 

#include "Area.h"
#include "Track.h"
#include "TrackDesign.h"
#include "TrackTraits.h"
#include "TrackType.h"

#include "Medium.h"
#include "Hard.h"
#include "Soft.h"
#include "ConcreteEngineer.h"
#include "SoftStrategists.h"
#include "MediumStrategists.h"
#include "HardStrategists.h"

int main(){
  
//     forllow order
//       Engineering
//       Testing
//       Simulation
//       Racing Start
//       Logistics
//       Race
      
      
  
  
    cout<<"=============Engineering============\n";
    cout<<"=============Creating New Car For Next Season============\n";
    AerodynamicsFactory* a = new AerodynamicsFactory();
    ElectronicsFactory* b = new ElectronicsFactory();
    EngineFactory* c = new EngineFactory();
    ChassisFactory* d = new ChassisFactory();

    Car* enzo = new Car("Enzo","","","");
    
    enzo->add(a->build(1,"2.5",0,0));
    enzo->add(b->build(1,"TAG-320B",130,4));
    enzo->add(c->build(1,"v8",14000,900));
    enzo->add(d->build(1,"carbon fibre",13,800));
    
    
    cout<<endl;
    enzo->description();
  
   cout<<"\n=============Creating Current Car For This Season============\n";

    Car* SF90 = new Car("SF90","","","");
  
    CarPart* Ca = new CurrentAerodynamics();
    CarPart* Cb = new CurrentElectronics();
    CarPart* Cc = new CurrentEngine();
    CarPart* Cd = new  CurrentChassis();
  
    cout<<"\n=============Creating Current Car Parts============\n";
    Ca = a->build(0,"2.8",0,0);
    Cb = b->build(0,"TAG-320",120,4);
    Cc = c->build(0,"v8",12000,900);
    Cd = d->build(0,"carbon fibre",12,740);
  
    
    cout<<"\n=============Creating Copies For Current Car Parts And Adding Them To Car============\n";
    SF90->add(Ca->clone());
    SF90->add(Cb->clone());
    SF90->add(Cc->clone());
    SF90->add(Cd->clone());
   
    cout<<endl;
    SF90->description();

    cout<<"=============Testing============\n";
    cout<<"\n=============Creating Wind Tunnel============\n";
    WindTunnel * tunnel = new WindTunnel();
    cout<<"Test car 5 times"<<endl;
    for(int i = 0; i<5; i++)
        tunnel->testCar(enzo);

    cout<<"=============End Of Testing============\n";
    cout<<"=============Simulation================\n";
    Area* newArea = new Track();
    newArea->setAreaName("Austria");
    Track* bTrack = new Track("Red Bull Ring");
    TrackDesign* dTrack = new TrackDesign("Race Circuit",4.326);
    TrackTraits* eTrack = new TrackTraits("wet","anti-clockwise");
    cout<<endl;
    newArea->print();
    bTrack->print();
    dTrack->print();
    eTrack->print();
    newArea->add(new Track());
    cout<<endl;
    delete eTrack;
    delete dTrack;
    delete bTrack;
    delete newArea;
    cout<<"=============End of Simulation=========\n";
    
    cout<<"==================================Testing Racing Strategy================"<<endl;
    cout<<endl;
    Team** teams= new Team*[4];
    teams[0]= new SoftStrategists();
    teams[1]= new HardStrategists();
    teams[2]= new MediumStrategists();
    teams[3]= new MediumStrategists();
    Tyre* soft=new Soft();
    Tyre* hard=new Hard();
    Tyre* medium=new Medium();
    teams[0]->changeTyre(soft);
    teams[1]->changeTyre(hard);
    teams[2]->changeTyre(hard);
    teams[3]->changeTyre(medium);

    Engineer* engineer=new ConcreteEngineer(teams,4);
    for(int i=0;i<4;i++){
        teams[i]->setEng(engineer);
    }
    cout<<"__________________________Testing Changed_______________________________"<<endl;
    cout<<endl;
    for(int i=0;i<4;i++){
        teams[i]->Tested();
    }
    cout<<endl;
    cout<<"______________________Testing ChangeTyre________________________________"<<endl;
    cout<<endl;
    teams[0]->changeTyre(medium);
    teams[1]->changeTyre(soft);
    teams[2]->changeTyre(medium);
    teams[3]->changeTyre(hard);
    cout<<endl;
    cout<<"______________________Testing CheckTyre_________________________________"<<endl;
    cout<<endl;
    cout<<"The car has the following tyres: "<<endl;
    for(int i=0;i<4;i++){
        
        cout<<teams[i]->checkTyre()<<" Tyre"<<endl;
    }
    cout<<endl;
    cout<<"=======================End Of Race Strategy===============================\n";
    cout<<endl;


  cout<<"\n=============Logistics============\n";
    cout<<"\n=============European Race============\n";
    Continent *eu = new EU();
    Container *con;
    con = new compositeContainer();
    con = new  Truck(150, 200);

    cout<<"\n=============Adding Contents============\n";
    con->addContainer(new Contents(10, "Motor equipement"));
    con->addContainer(new Contents(30, "Catering equipment"));
    con->addContainer(new Contents(50, "Garage equipment"));
    eu->setCarry(con);
    eu->travel();
    eu->mode();
    cout<<endl<<endl;

	cout << "IT'S THE RACE WEEKEND" << endl << endl;

	Car** cars = new Car*[20];
	cars[0] = new Car("Car20", "Marcus", "Selena", "Team K");
	cars[1] = new Car("Car1", "John", "Andrew", "Team A");
	cars[2] = new Car("Car2", "Matthew", "Jerome", "Team A");
	cars[3] = new Car("Car3", "Luke", "Kevin", "Team B");
	cars[4] = new Car("Car4", "Joseph", "Nick", "Team B");
	cars[5] = new Car("Car5", "Jacob", "Winston", "Team C");
	cars[6] = new Car("Car6", "David", "Ernie", "Team C");
	cars[7] = new Car("Car7", "Paul", "Ryan", "Team D");
	cars[8] = new Car("Car8", "James", "Dylan", "Team D");
	cars[9] = new Car("Car9", "Phillip", "George", "Team E");
	cars[10] = new Car("Car10", "Sally", "Liam", "Team E");
	cars[11] = new Car("Car11", "Cindy", "Adam", "Team F");
	cars[12] = new Car("Car12", "Karen", "Peter", "Team F");
	cars[13] = new Car("Car13", "Kathy", "Simon", "Team H");
	cars[14] = new Car("Car14", "Jill", "Jason", "Team H");
	cars[15] = new Car("Car15", "Mark", "Chris", "Team I");
	cars[16] = new Car("Car16", "Jonathan", "Tyler", "Team I");
	cars[17] = new Car("Car17", "Nathan", "Wayne", "Team J");
	cars[18] = new Car("Car18", "Joel", "Justin", "Team J");
	cars[19] = new Car("Car19", "Harold", "Hailey", "Team K");
	

	RaceTrack* track = new RaceTrack(cars);

	cout << track->openForPractice() << endl;
	PracticeState* one = new FridayMorningPractice;
	track->setPractice(one);
	PracticeState* two = one->changePractice(2);
	track->setPractice(two);
	PracticeState* three = two->changePractice(2);
	track->setPractice(three);
	cout << track->close() << endl << endl;


	cout << track->openForQualifier() << endl;
	track->startQualifier();
	cout << track->close() << endl << endl;

	cout << track->openForRace() << endl;
	track->setGridOrder();

	RaceHandler* racing = new Racing();
	Positioning* positioning = new Positioning();
	PointAssigning* pAssigning = new PointAssigning();

	racing->next(positioning);
	positioning->next(pAssigning);
	//pAssigning->next(racing);

	track->startRace(racing);
	track->startRace(positioning);
	track->startRace(pAssigning);
	cout << track->close() << endl << endl;





	cout << "The end" << endl;
    
    delete con;
    delete eu;

    delete a;
    delete b;
    delete c;
    delete d;

    delete Ca;
    delete Cb;
    delete Cc;
    delete Cd;

    delete enzo;
    delete SF90;



    
    return 0;
}
