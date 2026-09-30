include librarys

create main function
    introduce ifstream named inFile
    create int named intOne
    create int named intTwo
    create int named sumint
    create string named sintOne
    create string named sintTwo
    create string named text
    introduce stringstream converter
    create bool variable named keepGoing
    open file
    create a while loop with condition of keepGoing
        create an if with condition of inFile.eof
            if true keepGoing is false
        create else
            read line with delimiter of , and put data into sintOne
            read line with delimiter of , and put data into sintTwo
            put sintOne and sintTwo into converter seperated by space
            put converter into intOne and intTwo
            clear converter
            add intOne and intTwo together and assign to sumint
            read line with default delimiter and put data into text
            create for loop and print text sumint times
    close file
