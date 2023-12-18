import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

ApplicationWindow {
    width: 1024
    height: 680
    visible: true
    title: "Hello World"

    Item {
        anchors.fill: parent
        Rectangle {
            id: rect1
            color: "steelblue"
            height: parent.height
            width: parent.width / 2
            anchors {
                top: parent.top
                left: parent.left
            }

            ColumnLayout {
                anchors.centerIn: parent

                TextField {
                    color: "white"
                    background: Rectangle {
                        radius: 2
                        implicitWidth: 100
                        implicitHeight: 24
                        border.color: "#333"
                        border.width: 1
                        color: "black"
                    }
                }


                Button {
                    text: "Submit"
                    onClicked: myObject.print_message("Hello, World!\n", 3)
                }

                Connections {
                    target: myObject
                    function onMessageChanged(message) {
                        console.log(message)
                    } 
                }
            }
        }

        Rectangle {
            id: rect2
            color: "red"
            height: parent.height
            width: parent.width / 2
            anchors {
                top: parent.top
                right: parent.right
            }
        }
    }
}
