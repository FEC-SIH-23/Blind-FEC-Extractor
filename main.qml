    import QtQuick 2.2
    import QtQuick.Controls 2.5
    import QtQuick.Layouts 1.3
    import QtQuick.Dialogs
    import QtCore

ApplicationWindow {
    id: window
    width: 1024
    height: 680
    visible: true
    title: "Hello World"
    property string inputText: ""

    StackView {
        id: stackView
        // anchors.centerIn: parent
        initialItem: "InitialPage.qml"
        anchors.fill: parent
    }
}
