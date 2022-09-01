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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: train                         // 1)
//  action 1: the train moves           // 2)
train.move();                           // 3)
//  action 2: the train stops           // 2)
train.stop();                           // 3)
//  action 3: the train starts          
train.start();

//  2)
//  Noun: guitar
//  action 1: the guitar strums
guitar.strum();
//  action 2: the guitar plucks
guitar.pluck();
//  action 3: the guitar picks
guitar.pick();

//  3)
//  Noun: phone
//  action 1: the phone rings
phone.ring();
//  action 2: the phone mutes
phone.mute()
//  action 3: the phone vibrates
phone.vibrate();

//  4)
//  Noun: mouse
//  action 1: the mouse eats
mouse.eats();
//  action 2: the mouse runs
mouse.runs();
//  action 3: the mouse sits
mouse.sit();

//  5)
//  Noun: person
//  action 1: the person stands
person.stand();
//  action 2: the person sits
person.sit();
//  action 3: the person reads
person.reads();

//  6)
//  Noun: shoe
//  action 1: the shoe ties
shoe.tie();
//  action 2: the shoe moves
shoe.moves();
//  action 3: the shoe laces
shoe.laces();
//  7)
//  Noun: speaker
//  action 1: the speaker plays
speaker.plays();
//  action 2: the speaker mutes
speaker.mute();
//  action 3: the speaker moves
speaker.moves();
//  8)
//  Noun: hammer
//  action 1: the hammer hits
hammer.hit();
//  action 2: the hammer smashes
hammer.smash();
//  action 3: the hammer rests
hammer.rest();
//  9)
//  Noun: key
//  action 1: the key locks
key.lock();
//  action 2: the key unlocks
key.unlock();
//  action 3: the key drops
key.drop();
//  10)
//  Noun: oven
//  action 1: the oven cooks
oven.cooks
//  action 2: the oven burns
oven.burns
//  action 3: the oven cools
    oven.cool();



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
