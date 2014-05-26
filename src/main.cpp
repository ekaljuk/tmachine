#include "Core.hpp"

#include "Book.hpp"
#include "Chapter.hpp"
#include "Chapter01.hpp"
#include "Character.hpp"
#include "Timeline.hpp"

int main(int argc, char* argv[])
{
    system("clear");

    // The story begins! Let's create our book as a collection of chapters.
    Book ttm("The Time Machine", "H.G. Wells");

    // Since current year is unspecified, using contemporary publishing
    // date as the starting year.
    Timeline timeSpaceContinuum(1895);
    ttm.setTimeline(&timeSpaceContinuum);

    // Define our core characters.
    Character frameNarrator("Unidentified narrator", Character::Type::Unknown);

    Character protagonist("The Time Traveller", Character::Type::Human);
    protagonist.setGender(Character::Gender::Male);

    ttm.addCharacters(&frameNarrator);
    ttm.addCharacters(&protagonist);
    ttm.setNarrator(&frameNarrator);

    // And off we go!
    ttm.startReading();

    return 0;
}
