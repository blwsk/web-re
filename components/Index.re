type state = {
  count: int,
  text: string,
};

let component = ReasonReact.statefulComponent "Index";

let make _children => {
  let handleClick = fun _event {ReasonReact.state} => ReasonReact.Update
    { ...state, count: state.count + 1 };

  let handleChange = fun event {ReasonReact.state} => {
    let value = (ReactDOMRe.domElementToObj (ReactEventRe.Form.target event))##value;

    ReasonReact.Update { ...state, text: value };
  };

  {
    ...component,
    initialState: fun () => {count: 0, text: ""},
    render: fun self => {
      let buttonText = "Clicked me " ^ (string_of_int self.state.count) ^ " times";
      let stringLengthText = "Length of input string: " ^ (string_of_int (String.length self.state.text));

      <Layout>
        <Nav />
        <UIButton
          use="primary"
          text=buttonText
          onClick={self.update handleClick}
        />
        <input _type="text" onChange={self.update handleChange} value={self.state.text} />
        <div>
          (ReasonReact.stringToElement stringLengthText)
        </div>
      </Layout>
    } 
  }
};
let jsComponent =
  ReasonReact.wrapReasonForJs
    ::component
    (fun _jsProps => make [||])
