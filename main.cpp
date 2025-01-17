#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:        plant
//  action 1:    the plant bears fruits
plant.bearFruits();
//  action 2:    the plant blooms
plant.bloom();
//  action 3:    the plant produces seeds
plant.produceSeeds();
//  2)
//  Noun:        cat
//  action 1:    the cat meows
cat.moew();
//  action 2:    the cat purrs
cat.purr();
//  action 3:    the cat drinks milk
cat.drinkMilk();
//  3)
//  Noun:        wind
//  action 1:    the wind blows
wind.blow();
//  action 2:    the wind howls
wind.howl();
//  action 3:    the wind dies down
wind.dieDown();
//  4)
//  Noun:        pickup truck
//  action 1:    a pickup truck pulls over 
pickupTruck.pullOver();
//  action 2:    a pickup truck slows down
pickupTruck.slowDown();
//  action 3:    a pickup truck knocks down pedestrian
pickupTruck.knocksDownPedestrian();
//  5)
//  Noun:        bird
//  action 1:    the bird sings
bird.sing();
//  action 2:    the bird builds a nest
bird.buildNest();
//  action 3:    the bird migrates
bird.migrate();
//  6)
//  Noun:        energy
//  action 1:    the energy boosts
energy.boost();
//  action 2:    the energy propagates
energy.propagate();
//  action 3:    the energy pulsates
energy.pulsate();
//  7)
//  Noun:        water
//  action 1:    the water flows
water.flow();
//  action 2:    the water boils
water.boil();
//  action 3:    the water absorbs oxygen
water.absorbOxygen();
//  8)
//  Noun:        rain
//  action 1:    the rain falls
rain.fall();
//  action 2:    the rain fades
rain.fade();
//  action 3:    the rain intensify
rain.intensify();
//  9)
//  Noun:        bees  
//  action 1:    bees fly
bees.fly();
//  action 2:    bees buzz
bees.buzz();
//  action 3:    bees sting
bees.sting();
//  10)
//  Noun:        sun
//  action 1:    the sun shades
sun.shade();
//  action 2:    the sun goes down
sun.goDown();
//  action 3:    the sun blazes
sun.blaze();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
