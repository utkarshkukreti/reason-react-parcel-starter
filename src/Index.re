[@bs.val] external document: Js.t({..}) = "document";

module Counter = {
  [@react.component]
  let make = () => {
    let (count, setCount) = React.useState(() => 0);
    <div>
      <button onClick={_ => setCount(_ => count - 1)}>
        {React.string("-")}
      </button>
      {React.string({j| $count |j})}
      <button onClick={_ => setCount(_ => count + 1)}>
        {React.string("+")}
      </button>
    </div>;
  };
};

ReactDOMRe.render(<Counter />, document##querySelector("main"));