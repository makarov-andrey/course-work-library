#ifndef COURSE_WORK_MESSAGEQUEUEDRAWER_H
#define COURSE_WORK_MESSAGEQUEUEDRAWER_H


#include <queue>
#include "../Drawable.h"
#include "messages/MessageDrawer.h"

class MessageQueueDrawer : public Drawable {
protected:
    std::queue<MessageDrawer*> *messages;

public:
    void setMessages(std::queue<MessageDrawer*> *messages);
    void render ();
};


#endif //COURSE_WORK_MESSAGEQUEUEDRAWER_H
