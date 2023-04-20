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
//  Noun:      person
//  action 1:  a person walks
person.walk();
//  action 2:  a person thinks
person.think();
//  action 3:  a person talks
person.talk();
//  2)
//  Noun:      calculator
//  action 1:  a calculator counts
calculator.count();
//  action 2:  a calculator drains battery
calculator.drainBattery();
//  action 3:  a calculator multiplies
calculator.multiply();
//  3)
//  Noun:      dog
//  action 1:  a dog barks
dog.bark();
//  action 2:  a dog runs
dog.run();
//  action 3:  a dog sleeps
dog.sleep();
//  4)
//  Noun:      guitarist
//  action 1:  a guitarist plays guitar
guitarist.playGuitar();
//  action 2:  a guitarist sings
guitarist.sing();
//  action 3:  a guitarist studies scales
guitarist.studyScales();
//  5)
//  Noun:      engineer
//  action 1:  an engineer writes code
engineer.writeCode();
//  action 2:  an engineer designs systems
engineer.designSystem();
//  action 3:  an engineer studies mathematics
engineer.studyMathematics();
//  6)
//  Noun:      chef
//  action 1:  a chef prepares a meal
chef.prepareMeal();
//  action 2:  a chef seasons a steak
chef.seasonSteak();
//  action 3:  a chef cooks
chef.cook();
//  7)
//  Noun:      director
//  action 1:  a director directs a movie
director.directMovie();
//  action 2:  a director decides
director.decide();
//  action 3:  a director plans
director.plan();
//  8)
//  Noun:      project manager
//  action 1:  a project manager plans projects
projectManager.planProject();
//  action 2:  a project manager organizes the team
projectManager.organizeTeam();
//  action 3:  a project manager schedules meetings
projectManager.scheduleMeeting();
//  9)
//  Noun:      senior developer
//  action 1:  a senior developer attends meetings
seniorDeveloper.attendMeeting();
//  action 2:  a senior developer reviews code
seniorDeveloper.reviewCode();
//  action 3:  a senior developer develops algorithms
seniorDeveloper.developAlgorithm();
//  10)
//  Noun:       composer
//  action 1:   a composer composes
composer.compose();
//  action 2:   a composer arranges
composer.arrange();
//  action 3:   a composer studies harmony
composer.studyHarmony();
#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
