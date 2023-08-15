class LFUCache {
    int capacity;
    int minFreq;
    unordered_map<int,pair<int,int>> keyVal;
    unordered_map<int,list<int>> freqList;
    unordered_map<int,list<int>::iterator> pos;
public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }
    
    int get(int key) {
        if(keyVal.find(key) == keyVal.end())
            return -1;
        freqList[keyVal[key].second].erase(pos[key]);
        keyVal[key].second++;
        freqList[keyVal[key].second].push_back(key);
        pos[key] = --freqList[keyVal[key].second].end();
        if(freqList[minFreq].empty())
            minFreq++;
        return keyVal[key].first;
    }
    
    void put(int key, int value) {
        if(!capacity)
            return;
        if(keyVal.find(key) != keyVal.end()) {
            keyVal[key].first = value;
            freqList[keyVal[key].second].erase(pos[key]);
            keyVal[key].second++;
            freqList[keyVal[key].second].push_back(key);
            pos[key] = --freqList[keyVal[key].second].end();
            if(freqList[minFreq].empty())
                minFreq++;
            return;
        }
        if(keyVal.size() == capacity) {
            int delKey = freqList[minFreq].front();
            keyVal.erase(delKey);
            pos.erase(delKey);
            freqList[minFreq].pop_front();
        }
        keyVal[key] = {value,1};
        freqList[1].push_back(key);
        pos[key] = --freqList[1].end();
        minFreq = 1;
    }
};

// struct Node{
//         int key;
//         int val;
//         int cnt;
//         Node* prev;
//         Node* next;
//         Node(int _key,int _val){
//             key=_key;
//             val=_val;
//             cnt=1;
//         }
// };
    
// struct List{
//     int size;
//     Node* head;
//     Node* tail;
//     List(){
//         head=new Node(0,0);
//         tail=new Node(0,0);
//         head->next=tail;
//         tail->next=head;    
//     }
//     void addFront(Node* anode){
//         Node* temp=head->next;
//         anode->next=temp;
//         anode->prev=head;
//         head->next=anode;
//         temp->prev=anode;
//         size++;
//     }
//     void removeNode(Node* dnode)
//     {
//         Node* temp=dnode->prev;
//         temp->next=dnode->next;
//         dnode->next->prev=temp;
//         size--;
//     }
// };

// class LFUCache {
// public:
//     map<int,Node*> keyNode;
//     map<int,List*> freqListMap;
//     int maxSizeCache;
//     int minFreq;
//     int curSize;
    
//     LFUCache(int capacity) {
//         maxSizeCache=capacity;
//         minFreq=0;
//         curSize=0;
//     }
    
//     void updateFreqListMap(Node* node)
//     {
//        keyNode.erase(node->key);
//         freqListMap[node->cnt]->removeNode(node);
//         if(node->cnt==minFreq && freqListMap[node->cnt]->size ==0){
//            minFreq++;
//         }
//         List* nextHighFreqList= new List();
//         if(freqListMap.find(node->cnt+1) !=freqListMap.end()){
//             nextHighFreqList =freqListMap[node->cnt+1];
//         }
//         node->cnt+=1;
//         nextHighFreqList->addFront(node);
//         freqListMap[node->cnt]=nextHighFreqList;
//         keyNode[node->key]=node;
        
//     }
    
//     int get(int key) {
//           if(keyNode.find(key)!=keyNode.end())
//         {
//             Node* resnode=keyNode[key];
//             int res=resnode->val;
//             updateFreqListMap(resnode);
//             return res;
//         }
//         return -1;   
//     }
    
//     void put(int key, int value) {
//         if(maxSizeCache==0)
//             return;
//         if(keyNode.find(key)!=keyNode.end())
//         {
//             Node* node=keyNode[key];
//             node->val=value;
//             updateFreqListMap(node);
//         }
//         else{
//             if(curSize==maxSizeCache){
//                 List* list=freqListMap[minFreq];
//                 keyNode.erase(list->tail->prev->key);
//                 freqListMap[minFreq]->removeNode(list->tail->prev);
//                 curSize--;
//             }
//             curSize++;
//             minFreq=1;
//             List* listFreq=new List();
//             if(freqListMap.find(minFreq)!=freqListMap.end()){
//                 listFreq=freqListMap[minFreq];
//             }
//             Node* node =new Node(key,value);
//             listFreq->addFront(node);
//             keyNode[key]=node;
//             freqListMap[minFreq]=listFreq;
//         }
//     }
// };

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */